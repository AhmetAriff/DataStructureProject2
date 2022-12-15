#include"Organ.hpp"

Organ::Organ()
{
    this->bst = new BST();
}

Organ::~Organ()
{
    this->bst->~BST();
}