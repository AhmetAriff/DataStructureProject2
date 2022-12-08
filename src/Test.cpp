#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include"Radix.hpp"
#include"Tissue.hpp"
#include"Organism.hpp"




using namespace std;



int main(){
    

int counter =0;

Organ* organ = new Organ();
System* system = new System();
Organism* organism= new Organism();




ifstream in;
    in.open("Veri.txt");

   
            while (!in.eof())
            {
                counter++;

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

                if((counter%20==0) )
                {
                    system->add(organ);
                    organ = new Organ();
    
                } 

                    organ->bst->Add(tissue);

                if(counter%2000==0){
                    organism->add(system);
                    system= new System();
                }
                
            }


            cout<<organism->elementAt(0)->size();
}

    
     
   
   
