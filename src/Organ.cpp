
#include"Organ.hpp"

Organ::Organ(){
    this->bst = new BST();
}

Organ::~Organ(){
    delete this->bst;
}

void Organ::mutateTheOrgan(){
    bst->mutateTheTree();
}

bool Organ::isBalanced(){
    bst->isBalanced();
}

void Organ::add(Tissue* tissue){
    bst->Add(tissue);
}