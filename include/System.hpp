#ifndef SISTEM_HPP
#define SISTEM_HPP
#include"Organ.hpp"

class System
{
private:
    Organ **items;
	int length;
	int capacity;
public:
    
   
    System();
		
	int size();
	
	bool isEmpty() ;
		
	Organ* elementAt(int i);
		
	void remove(Organ* organ);
		
	void removeAt(int index);
		
	void add(Organ* organ);
	
	void insert(int index,Organ* organ);
		
	void clear();
		
	~System();
	

};







#endif