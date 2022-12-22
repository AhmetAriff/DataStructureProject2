
#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP
#include <iostream>
#include <cmath>
using namespace std;
#include"Radix.hpp"

struct Node{
	Tissue* data;
	Node *left;
	Node *right;
	
	Node(Tissue*  dt,Node *lf=NULL,Node *rg=NULL){
		data = dt;
		left = lf;
		right = rg;
	}
};

class BST{
	private:	
	
		Node *root;
		void SearchAndAdd(Node *&subNode,Tissue* tissue);
		bool SearchAndDelete(Node *&subNode,Tissue* tissue);
		bool DeleteNode(Node *&subNode);
		void mutateTheTree(Node* subNode);
		int isBalanced(Node*root);
	public:
	
		BST();
		bool isEmpty();
		bool isBalanced();
		void Add(Tissue* tissue);
		void Delete(Tissue* tissue);
		int postorder(Node *root,Tissue** tissues,int index);
		Tissue** postorderToArray(Node*root);
		void mutateTheTree();
		void Clear();
		~BST();
};





#endif