
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

    string data;
    Organism* organism;
    void refreshConole();
   
public:
    Control(string data);
    void readAndAdd();
    void printOrganism();
    void printMutatedOrganism();
    ~Control();

};




#endif