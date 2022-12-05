#include"BinarySearchTree.hpp"
void BST:: SearchAndAdd(Node *&subNode,Tissue* tissue){
			if(subNode == NULL) subNode = new Node(tissue);
			else if(tissue->midNumber <= subNode->data->midNumber)
				SearchAndAdd(subNode->left,tissue);
			else if(tissue > subNode->data)
				SearchAndAdd(subNode->right,tissue);
		}
		bool BST:: SearchAndDelete(Node *&subNode,Tissue* tissue){
			if(subNode == NULL) return false;
			if(subNode->data == tissue) return DeleteNode(subNode);
			else if(tissue->midNumber < subNode->data->midNumber) return SearchAndDelete(subNode->left,tissue);
			else return SearchAndDelete(subNode->right,tissue);
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
				cout<<subNode->data->midNumber<<" ";
				inorder(subNode->right);
			}
		}
		void BST:: preorder(Node *subNode){
			if(subNode != NULL){
				cout<<subNode->data->midNumber<<" ";
				preorder(subNode->left);
				preorder(subNode->right);
			}
		}
		void BST:: postorder(Node *subNode){
			if(subNode != NULL){
				postorder(subNode->left);
				postorder(subNode->right);
				cout<<subNode->data->midNumber<<" ";
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
		bool BST:: Search(Node *subNode,Tissue* tissue){
			if(subNode == NULL) return false;
			if(subNode->data->midNumber == tissue->midNumber) return true;
			if(tissue->midNumber < subNode->data->midNumber) return Search(subNode->left,tissue);
			else return Search(subNode->right,tissue);
		}
	
		 BST::BST(){
			root = NULL;
		}
		bool BST:: isEmpty()const{
			return root == NULL;
		}
		void BST:: Add(Tissue* tissue){
			SearchAndAdd(root,tissue);
		}
		void BST:: Delete(Tissue* tissue){
			if(SearchAndDelete(root,tissue) == false) throw "Item not found.";
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
		bool BST:: Search(Tissue* tissue){
			return Search(root,tissue);
		}
		void BST:: Clear(){
			while(!isEmpty()) DeleteNode(root);
		}
		 BST::~BST(){
			Clear();
		}