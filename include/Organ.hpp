
#ifndef ORGAN_HPP
#define ORGAN_HPP
#include"BinarySearchTree.hpp"

class Organ
{
private:
    BST* bst;
public:
    
    Organ();
    ~Organ();
    void mutateTheOrgan();
    bool isBalanced();
    void add(Tissue* tissue);
};




#endif