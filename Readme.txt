==================Sequential=========================
compile : > g++ -std=c++11 -O3 <fileName.cpp> -o <output fileName>
run	: > ./<output fileName> <inputFile.txt> <no_of_Iterations>


==================Parallel==============================
compile : > g++ -std=c++11 -O3 -pthread <fileName.cpp> -o <output fileName>
run	: > ./<output fileName> <inputFile.txt> <no_of_Iterations> <parallelism degree>

==================FastFlow===============================
	  >export FF_HOME=$HOME/fastflow
compile : > g++ -std=c++11 -Wall -DNO_DEFAULT_MAPPING -O3 -I $FF_HOME <fileName.cpp> -o <output fileName> -pthread
run	: > ./<output fileName> <inputFile.txt> <no_of_Iterations> <parallelism degree>
===========================================================