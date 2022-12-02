#include "Node.hpp"

#include"Node.hpp"

using namespace std;

Node::Node(Tissue* data, Node* left , Node* right ) {


	this->data = data;
	this->left = left;
	this->right = right;

};