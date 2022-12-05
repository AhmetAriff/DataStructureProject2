#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include"Radix.hpp"
#include"Tissue.hpp"
#include"Organ.hpp"
using namespace std;



int main(){
    
int counter=0;
Organ* organ = new Organ();
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

        Radix* radix = new Radix(tissue);
        tissue->midNumber=radix->Sort();
        delete radix;
        if(counter%20==0 && counter!=0){
           Organ* organ = new Organ();
        }
        organ->bst->Add(tissue);
        
        counter++;
   }
   organ->bst->preorder();
   cout<<"helloworld";
   
}