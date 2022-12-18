#include"Control.hpp"


void Control::refreshConole(){

    system("CLS");
}

Control::Control(string data){
    this->data=data;
}
void Control::printOrganism(){

    refreshConole();
    readAndAdd();

    cout<<"                   (ORGANISM)"<<endl<<endl;

    for(int i =0;i<organism->size();i++){

         for(int j=0;j<100;j++){


            if(organism->elementAt(i)->elementAt(j)->bst->isBalanced()){
                cout<<" ";
            }
            else{
                cout<<"#";
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
                cout<<" ";
            }
            else{
                cout<<"#";
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


ifstream in;
    in.open(data);

   
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
            int next;

            Tissue* tissue = new Tissue();
            
            while (bool(ss>>next)==true)
            {
                tissue->add(next);
                        
            }

            Radix* radix = new Radix(tissue);
            tissue->midNumber=radix->Sort();
            delete radix;

            organ->bst->Add(tissue);

            if(counter%20==0)
            {
                system->add(organ);
                organ = new Organ();
    
            } 

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

