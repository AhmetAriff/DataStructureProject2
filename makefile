All:Compile Run

Compile:
	g++ -I ./include/ -o ./lib/BinarySearchTree.o -c ./src/BinarySearchTree.cpp
	g++ -I ./include/ -o ./lib/Cell.o -c ./src/Cell.cpp
	g++ -I ./include/ -o ./lib/Control.o -c ./src/Control.cpp
	g++ -I ./include/ -o ./lib/Organ.o -c ./src/Organ.cpp
	g++ -I ./include/ -o ./lib/Organism.o -c ./src/Organism.cpp
	g++ -I ./include/ -o ./lib/Queue.o -c ./src/Queue.cpp
	g++ -I ./include/ -o ./lib/Radix.o -c ./src/Radix.cpp
	g++ -I ./include/ -o ./lib/Sistem.o -c ./src/Sistem.cpp
	g++ -I ./include/ -o ./lib/Tissue.o -c ./src/Tissue.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/BinarySearchTree.o ./lib/Cell.o ./lib/Control.o ./lib/Organ.o ./lib/Organism.o ./lib/Queue.o ./lib/Radix.o ./lib/Sistem.o ./lib/Tissue.o ./src/Test.cpp

Run:
	./bin/Test