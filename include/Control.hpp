
#ifndef CONTROL_HPP
#define CONTROL_HPP
#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include"Radix.hpp"
#include"Tissue.hpp"
#include"Organism.hpp"

class Control
{
private:

    Organism* organism;
    void refreshConole();
   
public:
    void readAndAdd();
    void printOrganism();
    void printMutatedOrganism();
    ~Control();

};




#endif