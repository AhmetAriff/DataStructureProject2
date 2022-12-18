#include"Organ.hpp"

Organ::Organ(){
    this->bst = new BST();
}

Organ::~Organ(){
    this->bst->~BST();
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