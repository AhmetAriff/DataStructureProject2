#include"Control.hpp"
#include"conio.h"//getch()

int main(){

    int input;
    
    Control * control = new Control("Veri.txt");
    control->printOrganism();
    
    do{
        input=getch();
    }
    while(input!=13);

    control->printMutatedOrganism();

    delete control;

}
            


            


    
     
   
   
