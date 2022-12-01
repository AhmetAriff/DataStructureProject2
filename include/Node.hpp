
#ifndef NODE_HPP
#define NODE_HPP

#include<iostream>
using namespace std;


class Node {
public:
	int data;
	Node *left;
	Node *right;

	Node( int data, Node *left = NULL , Node *right = NULL);

	
};




#endif