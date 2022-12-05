#include "Node.hpp"

#include"Node.hpp"

using namespace std;

Node::Node(Tissue* data, Node* left=NULL , Node* right=NULL ) {


	this->data = data;
	this->left = left;
	this->right = right;

};