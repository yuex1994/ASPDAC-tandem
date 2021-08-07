# Experiments for Generalizing Tandem Simulation

This repo contains the experiment artifacts for paper "Generalizing Tandem Simulation: Connecting High-level and RTL Simulation Models". It is a methodology that leverages the recently proposed Instruction-level Abstractions (ILAs) for generalizing tandem simulation (cross-level instruction-by-instruction simulating the instruction-level and RTL models) to accelerators. Further, it uses the refinement-map that is part of the ILA verification methodology to automate the connection between the ILA and the RTL simulation models. We provide seven case studies to demonstrate the practical applicability of the methodology. 

### Repo structure

There are four directories in the repo.
1. ILAng: forked from the original ILAng repo (https://github.com/PrincetonUniversity/ILAng/). It is augmented with ILAtor and tandem generator. 
2. performance-eval: contains the code to evaluate the simulation speed (each sub-directory for each design). It corresponds to Section IV.B. 
3. jump-start: contains the code to evaluate the speedup of jump-starting in long input sequences (each sub-directory for each design). It corresponds to Section IV.C.
4. bug-detection: contains the code to evaluate the improvement of detecting design bugs with tandem simulation. It corresponds to Section IV.D.

### Usage

1. Build ILAng (following the ILAng/README.md).
2. For performance-eval, enter each design directory and compile the simulation: 
   `cd **design**/**scenario**; mkdir build; cd build; cmake ..; make`. 
   Then run the provided script `../run.sh`.
3. For jump-start, enter each design directory and compile the simulation: 
   `cd **design**/sim; mkdir build; cd build; cmake ..; make`. 
   Then run the provided script `../run.sh`.
4. For bug-detection, enter each design directory and compile the simulation: 
   `cd **design**/**error_type**; mkdir build; cd build; cmake ..; make`. 
   Then run the generated binary: `./tandem-**design**-exe`.
