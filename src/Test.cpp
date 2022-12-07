#include<iostream>
#include<fstream>
#include<string.h>
#include<sstream>
#include"Radix.hpp"
#include"Tissue.hpp"
#include"Sistem.hpp"
#include"BinarySearchTree.hpp"


using namespace std;



int main(){
    

int counter =0;

BST* bst = new BST();

int i =0;

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

                if((counter%20==0) &&  counter !=0 )
                {
                    
                    BST* bst = new BST();
                    cout<<"###########################################################";
                    cout<<endl;
                } 

                    bst->Add(tissue);
                    
                    

                
        
                counter++;

                cout<<bst->Height();
                cout<<endl;
            }


           
            
        }

    
     
   
   
