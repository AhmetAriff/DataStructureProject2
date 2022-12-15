#include"Control.hpp"
#include"conio.h"

int main(){

    int input;
    
    Control * control = new Control();
    control->printOrganism();
    
    do{
        input=getch();
    }
    while(input!=13);

    control->printMutatedOrganism();

    delete control;

}
            


            


    
     
   
   
