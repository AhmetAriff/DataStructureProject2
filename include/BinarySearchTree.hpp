
#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP
#include <iostream>
#include <cmath>
using namespace std;
#include"Tissue.hpp"

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
		void inorder(Node *subNode);
		void preorder(Node *subNode);
		void postorder(Node *subNode);
		int Height(Node *subNode);
		void PrintLevel(Node *subNode,int level);
		bool Search(Node *subNode,Tissue* tissue);
	public:
	
		BST();
		bool isEmpty();
		void Add(Tissue* tissue);
		void Delete(Tissue* tissue);
		void inorder();
		void preorder();
		void postorder();
		void levelorder();
		int Height();
		bool Search(Tissue* tissue);
		void Clear();
		~BST();
};





#endif