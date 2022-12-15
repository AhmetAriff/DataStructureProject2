#include"Control.hpp"


void Control::refreshConole(){

    system("CLS");
}

void Control::printOrganism(){

    refreshConole();
    readAndAdd();

    cout<<"                   (ORGANISM)"<<endl<<endl;

    for(int i =0;i<organism->size();i++){

         for(int j=0;j<100;j++){


            if(organism->elementAt(i)->elementAt(j)->bst->isBalanced()){
                cout<<"#";
            }
            else{
                cout<<" ";
            }

            }
            cout<<endl;

            
        } 

}

void Control::printMutatedOrganism(){

    refreshConole();

    cout<<"                 (MUTATED ORGANISM)"<<endl<<endl;

    for(int i =0;i<organism->size();i++){

        for(int j=0;j<100;j++){


             organism->elementAt(i)->elementAt(j)->bst->mutateTheTree();

             if(organism->elementAt(i)->elementAt(j)->bst->isBalanced()){
                cout<<"#";
            }
            else{
                cout<<" ";
            }

            }
            cout<<endl;
        }

    }

    

void Control::readAndAdd(){

int counter =0;

Organ* organ = new Organ();
System* system = new System();
Organism* organism= new Organism();

string character;


ifstream in;
    in.open("Data.txt");

   
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

        delete organ;
        delete system;

        this->organism=organism;

}

Control::~Control(){

    delete organism;
}

