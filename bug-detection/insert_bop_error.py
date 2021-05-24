from __future__ import absolute_import
from __future__ import print_function
import sys
import os
from optparse import OptionParser

# the next line can be removed after installation
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
import random

import pyverilog
from pyverilog.vparser.parser import parse
from pyverilog.ast_code_generator.codegen import ASTCodeGenerator
from pyverilog.vparser.ast import IntConst, Width, Paramlist, Portlist, Operator, And, Xor, UnaryOperator, Cond, Assign, Rvalue


def add_bug(ast, bug_added):
    if (bug_added):
        return bug_added

    if isinstance(ast, Width):
        return bug_added
    elif isinstance(ast, Paramlist):
        return bug_added
    elif isinstance(ast, Portlist):
        return bug_added
    elif isinstance(ast, Operator) | isinstance(ast, Assign):
        if (isinstance(ast, UnaryOperator)):
            return bug_added
        if (isinstance(ast, Cond)):
            for child in ast.children():
                bug_added = add_bug(child, bug_added)
            return bug_added                        
        if (isinstance(ast.left, Xor)):
            taken = random.randint(0, 10)
            if (taken < 5):
                ast.left = And(ast.left.left, ast.left.right)
                return True
        bug_added = add_bug(ast.left, bug_added)
        if (bug_added):
            return bug_added
        if (isinstance(ast.right, Xor)):
            taken = random.randint(0, 10)
            if (taken < 5):
                ast.right = And(ast.right.left, ast.right.right)
                return True
        bug_added = add_bug(ast.right, bug_added)
        return bug_added
    elif isinstance(ast, Rvalue):
        if (isinstance(ast.var, Xor)):
            taken = random.randint(0, 10)
            if (taken < 5):
                ast.var = And(ast.var.left, ast.var.right)
                return True
            else:
                return add_bug(ast.var, bug_added)
        else:
            return add_bug(ast.var, bug_added)
    else:
        for child in ast.children():
            bug_added = add_bug(child, bug_added)
        return bug_added




def main():
    INFO = "Verilog code parser"
    VERSION = pyverilog.__version__
    USAGE = "Usage: python example_parser.py file ..."

    def showVersion():
        print(INFO)
        print(VERSION)
        print(USAGE)
        sys.exit()

    optparser = OptionParser()
    optparser.add_option("-v", "--version", action="store_true", dest="showversion",
                         default=False, help="Show the version")
    optparser.add_option("-I", "--include", dest="include", action="append",
                         default=[], help="Include path")
    optparser.add_option("-D", dest="define", action="append",
                         default=[], help="Macro Definition")
    (options, args) = optparser.parse_args()

    filelist = args
    if options.showversion:
        showVersion()

    for f in filelist:
        if not os.path.exists(f):
            raise IOError("file not found: " + f)

    if len(filelist) == 0:
        showVersion()

    ast, directives = parse(filelist,
                            preprocess_include=options.include,
                            preprocess_define=options.define)


    bug_added = add_bug(ast, False)
    print(bug_added)
    #ast.show()
    codegen = ASTCodeGenerator()
    rslt = codegen.visit(ast)
    print(rslt)
    #for lineno, directive in directives:
    #    print('Line %d : %s' % (lineno, directive))


if __name__ == '__main__':
    main()
