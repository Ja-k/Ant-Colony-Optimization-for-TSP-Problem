# Implementing Ant Colony Optimization Algorithm to Solve Traveling Salesman Problem

## Language
C++11

## Running the Code
### Sequential
Compile : >>
'''c++
g++ -std=c++11 -O3 <fileName.cpp> -o <output fileName>
	'''
Run	: >> ./<output fileName> <inputFile.txt> <no_of_Iterations>

### Parallel
Compile : >> g++ -std=c++11 -O3 -pthread <fileName.cpp> -o <output fileName>
Run	: >> ./<output fileName> <inputFile.txt> <no_of_Iterations> <parallelism degree>

### FastFlow
	  >>export FF_HOME=$HOME/fastflow
Compile : >> g++ -std=c++11 -Wall -DNO_DEFAULT_MAPPING -O3 -I $FF_HOME <fileName.cpp> -o <output fileName> -pthread
Run	: >> ./<output fileName> <inputFile.txt> <no_of_Iterations> <parallelism degree>
#### Note
The FastFlow program is executed on the server available for student at universty of Pisa. For running the FastFlow code on your system you can download FastFlow library from it's [Github](https://github.com/fastflow/fastflow) repository.
