#include"Sistem.hpp"

Sistem::Sistem()
    {
        length = 0;
        capacity=100;
        items = new Organ*[capacity];
    }
		
    int Sistem:: size() 
	{
		return length;
	}

	bool Sistem::isEmpty() 
	{
	    return size() == 0;
	}

	Organ* Sistem::elementAt(int i)
	{
		return items[i]; 
	}

	void Sistem::remove( Organ* organ)
	{
		for(int i=0;i<length;i++){
			if(items[i] == organ){
				removeAt(i);
				return;
			}
		}
	}

	void Sistem:: removeAt(int index) 
	{
		if(index<0 || index>=length) 
		for(int j=index+1;j<length;j++) items[j - 1] = items[j];
		length--;
	}

	void Sistem::add( Organ* organ)
	{			
		insert(length,organ);				
	}

	void Sistem:: insert(int i,Organ* organ) 
	{
	    for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
		items[i] = organ;
		length++;					
	}
		
	void Sistem:: clear()
	{
		length = 0;
	}
		
	Sistem::~Sistem()
    {
        if(items != NULL) delete [] items;
    }
