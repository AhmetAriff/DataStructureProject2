#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include"Cell.hpp"
#include"Queue.hpp"
#include"Radix.hpp"
#include"Tissue.hpp"
using namespace std;

int main(){

ifstream in;
    in.open("Veri.txt");
    while (!in.eof())
    {

        string line;
        getline(in, line);
        
        if (in.fail())
        {
            break;
        }
        
        stringstream ss;
        ss << line;
        int sonraki;

        Tissue* tissue = new Tissue();
     
        while (bool(ss>>sonraki)==true)
        {
            tissue->add(sonraki);
                  
        }
       
   
   }
   cout<<"hello wordl";
}