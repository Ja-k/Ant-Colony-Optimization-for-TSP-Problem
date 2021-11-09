# Implementing Ant Colony Optimization Algorithm to Solve Traveling Salesman Problem

## Language
C++11

## Running the Code
### Sequential Program
#### Compile
```c++
g++ -std=c++11 -O3 <fileName.cpp> -o <output fileName>
```
#### Run
```c++
./<output fileName> <inputFile.txt> <no_of_Iterations>
```
Example of "inputFile.txt" could be found [here](./194.txt).
### Parallel Program
#### Compile 
```c++
g++ -std=c++11 -O3 -pthread <fileName.cpp> -o <output fileName>
```
#### Run
```c++
./<output fileName> <inputFile.txt> <no_of_Iterations> <parallelism degree>
```

### FastFlow Program
```c++
export FF_HOME=$HOME/fastflow
```
#### Compile
```c++
g++ -std=c++11 -Wall -DNO_DEFAULT_MAPPING -O3 -I $FF_HOME <fileName.cpp> -o <output fileName> -pthread
```
#### Run
```c++
./<output fileName> <inputFile.txt> <no_of_Iterations> <parallelism degree>
```
##### Note
The FastFlow program is executed on the server available for students at the University of Pisa. For running the FastFlow code on your system you can download FastFlow library from it's [GitHub](https://github.com/fastflow/fastflow) repository.
