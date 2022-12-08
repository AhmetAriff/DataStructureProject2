
#ifndef ORGANISM_HPP
#define ORGANISM_HPP
#include"Sistem.hpp"

class Organism
{
private:
    Sistem **items;
	int length;
	int capacity;
    void reserve(int newCapacity);
public:
    
   
    Organism();
		
	int size();
	
	bool isEmpty() ;
		
	Sistem* elementAt(int i);
		
	void remove(Sistem* sistem);
		
	void removeAt(int index);
		
	void add(Sistem* sistem);
	
	void insert(int index,Sistem* sistem);
		
	void clear();
		
	~Organism();
	

};





#endif