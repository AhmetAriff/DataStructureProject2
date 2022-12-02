#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include"Cell.hpp"
#include"Queue.hpp"
#include"Tissue.hpp"
#include"Radix.hpp"
using namespace std;

int main(){

ifstream in;
    in.open("Veri.txt");
    while (!in.eof())
    {

        Tissue* tissue = new Tissue(new Queue());
        string line;
        getline(in, line);
        
        if (in.fail())
        {
            break;
        }
        
        stringstream ss;
        ss << line;
        int sonraki;
     
        while (bool(ss>>sonraki)==true)
        {
                   Cell* cell = new Cell(sonraki);
                   tissue->data->enqueue(cell->dna);
        }
       
        cout << line << endl;

   
   }
}