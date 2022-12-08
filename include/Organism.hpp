
#ifndef ORGANISM_HPP
#define ORGANISM_HPP
#include"System.hpp"

class Organism
{
private:
    System **items;
	int length;
	int capacity;
    void reserve(int newCapacity);
public:
    
   
    Organism();
		
	int size();
	
	bool isEmpty() ;
		
	System* elementAt(int i);
		
	void remove(System* sistem);
		
	void removeAt(int index);
		
	void add(System* sistem);
	
	void insert(int index,System* sistem);
		
	void clear();
		
	~Organism();
	

};





#endif