
#include"Organism.hpp"

    Organism::Organism()
    {
        length = 0;
        capacity=30;
        items = new System*[capacity];
    }
		
    void Organism::reserve(int newCapacity)
    {

        System** tmp = new System*[newCapacity];
        for(int index =0;index<length;index++){
            tmp[index]=items[index];
        }
        delete[] items;
        items=tmp;
        capacity=newCapacity;

    }
    int Organism:: size() 
	{
		return length;
	}

	bool Organism::isEmpty() 
	{
	    return size() == 0;
	}

	System* Organism::elementAt(int i)
	{
		return items[i]; 
	}

	void Organism::remove( System* system)
	{
		for(int i=0;i<length;i++){
			if(items[i] == system){
				removeAt(i);
				return;
			}
		}
	}

	void Organism:: removeAt(int index) 
	{
		if(index<0 || index>=length) 
		for(int j=index+1;j<length;j++) items[j - 1] = items[j];
		length--;
	}

	void Organism::add( System* system)
	{			
		insert(length,system);				
	}

	void Organism:: insert(int i,System* system) 
	{
        if(length==capacity) reserve (2*capacity);
	    for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
		items[i] = system;
		length++;					
	}
		
	void Organism:: clear()
	{
		length = 0;
	}
		
	Organism::~Organism()
    {
        if(items != NULL) delete [] items;
		
    }