
#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP
#include<Node.hpp>
#include <iostream>
#include <cmath>
using namespace std;


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
		bool isEmpty()const;
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