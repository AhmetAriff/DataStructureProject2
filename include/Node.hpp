#ifndef NODE_HPP
#define NODE_HPP
#include"Tissue.hpp"

class Node
{
private:

public:

    Tissue* data;
	Node *left;
	Node *right;
    Node(Tissue*  dt,Node *lf=NULL,Node *rg=NULL);
   
};

#endif