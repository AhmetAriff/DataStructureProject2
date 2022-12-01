#include"BinarySearchTree.hpp"
void BST:: SearchAndAdd(Node *&subNode,const int newItem){
			if(subNode == NULL) subNode = new Node(newItem);
			else if(newItem < subNode->data)
				SearchAndAdd(subNode->left,newItem);
			else if(newItem > subNode->data)
				SearchAndAdd(subNode->right,newItem);
			else return;
		}
		bool BST:: SearchAndDelete(Node *&subNode,int data){
			if(subNode == NULL) return false;
			if(subNode->data == data) return DeleteNode(subNode);
			else if(data < subNode->data) return SearchAndDelete(subNode->left,data);
			else return SearchAndDelete(subNode->right,data);
		}
		bool BST:: DeleteNode(Node *&subNode){
			Node *DelNode = subNode;
			
			if(subNode->right == NULL) subNode = subNode->left;
			else if(subNode->left == NULL) subNode = subNode->right;
			else{
				DelNode = subNode->left;
				Node *parent = subNode;
				while(DelNode->right != NULL){
					parent = DelNode;
					DelNode = DelNode->right;
				}
				subNode->data = DelNode->data;
				if(parent == subNode) subNode->left = DelNode->left;
				else parent->right = DelNode->left;
			}
			delete DelNode;
			return true;
		}
		void BST:: inorder(Node *subNode){
			if(subNode != NULL){
				inorder(subNode->left);
				cout<<subNode->data<<" ";
				inorder(subNode->right);
			}
		}
		void BST:: preorder(Node *subNode){
			if(subNode != NULL){
				cout<<subNode->data<<" ";
				preorder(subNode->left);
				preorder(subNode->right);
			}
		}
		void BST:: postorder(Node *subNode){
			if(subNode != NULL){
				postorder(subNode->left);
				postorder(subNode->right);
				cout<<subNode->data<<" ";
			}
		}
		
		int BST:: Height(Node *subNode){
			if(subNode == NULL) return -1;
			return 1+max(Height(subNode->left),Height(subNode->right));
		}
		void BST:: PrintLevel(Node *subNode,int level){
			if(subNode == NULL) return;
			if(level == 0) cout<<subNode->data<<" ";
			else{
				PrintLevel(subNode->left,level-1);
				PrintLevel(subNode->right,level-1);
			}
		}
		bool BST:: Search(Node *subNode,int item){
			if(subNode == NULL) return false;
			if(subNode->data == item) return true;
			if(item < subNode->data) return Search(subNode->left,item);
			else return Search(subNode->right,item);
		}
	
		 BST::BST(){
			root = NULL;
		}
		bool BST:: isEmpty()const{
			return root == NULL;
		}
		void BST:: Add(int newItem){
			SearchAndAdd(root,newItem);
		}
		void BST:: Delete(int data){
			if(SearchAndDelete(root,data) == false) throw "Item not found.";
		}
		void BST:: inorder(){
			inorder(root);
		}
		void BST:: preorder(){
			preorder(root);
		}
		void BST:: postorder(){
			postorder(root);
		}
		void BST:: levelorder(){
			int h = Height();
			for(int level=0;level<=h;level++){
				PrintLevel(root,level);
			}
		}
		int BST:: Height(){
			return Height(root);
		}
		bool BST:: Search(int item){
			return Search(root,item);
		}
		void BST:: Clear(){
			while(!isEmpty()) DeleteNode(root);
		}
		 BST::~BST(){
			Clear();
		}