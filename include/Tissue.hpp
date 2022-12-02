
#ifndef TISSUE_HPP
#define TISSUE_HPP
#include"Queue.hpp"

class Tissue
{
private:
    /* data */
public:
    int midNumber;
    Queue* data;
    
    Tissue(Queue* data);
    ~Tissue();
};



Tissue::~Tissue()
{
}




#endif