
#ifndef TISSUE_HPP
#define TISSUE_HPP
#include"Queue.hpp"
#include"Cell.hpp"

class Tissue
{
private:
    
    Cell* head;
    int size;

    Cell* findPreviousByPosition(int index);

public:

    int midNumber;

    Tissue();

    Cell* FindPosition(int index);

	void insert(int index, int dna);

	void add(int dna);

	int getDna(int index);

	int count();

	void removeAt(int index);

    void mutateTheTissue();

    ~Tissue();


    
};








#endif