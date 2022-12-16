#include"Node.hpp"

using namespace std;

Node::Node(Tissue*  dt,Node *lf,Node *rg)
{
    this->data=dt;
    this->left=lf;
    this->right=rg;
}