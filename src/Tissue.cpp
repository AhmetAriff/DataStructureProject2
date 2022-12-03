#include"Tissue.hpp"

Tissue::Tissue(){
    head=NULL;
    size=0;
}

Cell* Tissue::findPreviousByPosition(int index){
    
	Cell *prv = head;
	int i=1;
	for(Cell *itr = head; itr->next != NULL && i != index; itr=itr->next,i++){
		prv = prv->next;
	}
	return prv;
}		



Cell* Tissue::FindPosition(int index){

	return this->findPreviousByPosition(index+1);

}


void Tissue::insert(int index, int dna){

	if (index == 0) {
		head = new Cell(dna, head);
		}
	else{

		Cell *prev = findPreviousByPosition(index);
		prev->next = new Cell(dna,prev->next);

	}
		size++;

}

void Tissue::add(int dna){

	insert(size,dna);

}

int Tissue::elementAt(int index){

	if(index == 0) return head->dna;
	return findPreviousByPosition(index)->next->dna;
	
}

int Tissue::count(){

	return size;
}

void Tissue::removeAt(int index){

	Cell *del;
	Cell *prev = findPreviousByPosition(index);
	del = prev->next;
	prev->next = prev->next->next;
	delete del;

}