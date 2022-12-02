
#ifndef NODE_HPP
#define NODE_HPP

#include<iostream>
#include<Tissue.hpp>
using namespace std;


class Node {
public:
	Tissue *data;
	Node *left;
	Node *right;

	Node(Tissue* data, Node *left = NULL , Node *right = NULL);

	
};




#endif