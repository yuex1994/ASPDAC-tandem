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
from pyverilog.vparser.ast import IntConst, Width, Paramlist, Portlist


def add_bug(ast, bug_added):
    if (bug_added):
        return bug_added

    if isinstance(ast, Width):
        return bug_added
    elif isinstance(ast, Paramlist):
        return bug_added
    elif isinstance(ast, Portlist):
        return bug_added
    elif isinstance(ast, IntConst):
        taken = random.randint(0, 10)
        if (taken >= 1):
            return bug_added
        ast_value = ast.value
        if (ast_value.find("'h") != -1):
            idx = ast_value.find("'h")
            ast_value = ast_value[idx+2:]
            ast_value = int(ast_value, 16)
        elif (ast_value.find("'d") != -1):
            idx = ast_value.find("'d")
            ast_value = ast_value[idx+2:]
            ast_value = int(ast_value, 10)
        elif (ast_value.find("'b") != -1):
            idx = ast_value.find("'b")
            ast_value = ast_value[idx+2:]
            ast_value = int(ast_value, 2)                        
        else:
            ast_value = int(ast_value)

        if (ast_value == 0):
            ast.value = "1"
            return True
        while(1):
            new_value = random.randint(0, int(ast_value))
            if (new_value != ast_value):
                # ast.show()
                # print("--------------")
                ast.value = str(new_value)
                # print(bug_added)
                # ast.show()
                return True
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


    #ast.show()
    codegen = ASTCodeGenerator()
    rslt = codegen.visit(ast)
    print(rslt)
    #for lineno, directive in directives:
    #    print('Line %d : %s' % (lineno, directive))


if __name__ == '__main__':
    main()
