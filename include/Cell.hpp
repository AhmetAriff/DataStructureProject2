
#ifndef CELL_HPP
#define CELL_HPP

class Cell
{
private:
   
public:
    int dna;
    Cell* next;

    Cell(int dna,Cell*next=nullptr);
    
};



#endif