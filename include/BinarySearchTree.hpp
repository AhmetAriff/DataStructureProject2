
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
		void inorder(Node *subNode);
		void preorder(Node *subNode);
		int Height(Node *subNode);
		void PrintLevel(Node *subNode,int level);
		void mutateTheTree(Node* subNode);
		bool Search(Node *subNode,Tissue* tissue);
		bool isBalanced(Node * subNode);
	public:
	
		BST();
		bool isEmpty();
		bool isBalanced();
		void Add(Tissue* tissue);
		void Delete(Tissue* tissue);
		void inorder();
		void preorder();
		int postorder(Node *root,Tissue** tissues,int index);
		Tissue** postorderToArray(Node*root);
		void levelorder();
		int Height();
		void mutateTheTree();
		bool Search(Tissue* tissue);
		void Clear();
		int rightHeight();
		int leftHeight();
		~BST();
};





#endif