
#ifndef BINARY_SEARCH_TREE_HPP
#define BINARY_SEARCH_TREE_HPP
#include<Node.hpp>
#include <iostream>
#include <cmath>
using namespace std;


class BST{
	private:	
		Node *root;
		
		void SearchAndAdd(Node *&subNode,const int newItem);
		bool SearchAndDelete(Node *&subNode,int data);
		bool DeleteNode(Node *&subNode);
		void inorder(Node *subNode);
		void preorder(Node *subNode);
		void postorder(Node *subNode);
		int Height(Node *subNode);
		void PrintLevel(Node *subNode,int level);
		bool Search(Node *subNode,int item);
	public:
		BST();
		bool isEmpty()const;
		void Add(int newItem);
		void Delete(int data);
		void inorder();
		void preorder();
		void postorder();
		void levelorder();
		int Height();
		bool Search(int item);
		void Clear();
		~BST();
};





#endif