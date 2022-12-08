#include"System.hpp"

System::System()
    {
        length = 0;
        capacity=100;
        items = new Organ*[capacity];
    }
		
    int System:: size() 
	{
		return length;
	}

	bool System::isEmpty() 
	{
	    return size() == 0;
	}

	Organ* System::elementAt(int i)
	{
		return items[i]; 
	}

	void System::remove( Organ* organ)
	{
		for(int i=0;i<length;i++){
			if(items[i] == organ){
				removeAt(i);
				return;
			}
		}
	}

	void System:: removeAt(int index) 
	{
		if(index<0 || index>=length) 
		for(int j=index+1;j<length;j++) items[j - 1] = items[j];
		length--;
	}

	void System::add( Organ* organ)
	{			
		insert(length,organ);				
	}

	void System:: insert(int i,Organ* organ) 
	{
	    for(int j=length-1;j>=i;j--) items[j + 1] = items[j];
		items[i] = organ;
		length++;					
	}
		
	void System:: clear()
	{
		length = 0;
	}
		
	System::~System()
    {
        if(items != NULL) delete [] items;
    }
