#include"Organism.hpp"

    Organism::Organism()
    {
        length = 0;
        capacity=100;
        items = new Sistem*[capacity];
    }
		
    void Organism::reserve(int newCapacity)
    {

        Sistem** tmp = new Sistem*[newCapacity];
        for(int index =0;index<length;index++){
            items[index]=tmp[index];
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

	Sistem* Organism::elementAt(int i)
	{
		return items[i]; 
	}

	void Organism::remove( Sistem* sistem)
	{
		for(int i=0;i<length;i++){
			if(items[i] == sistem){
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

	void Organism::add( Sistem* sistem)
	{			
		insert(length,sistem);				
	}

	void Organism:: insert(int i,Sistem* sistem) 
	{
        if(length==capacity) reserve (2*capacity);
	    for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
		items[i] = sistem;
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