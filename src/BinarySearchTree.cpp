
#include"BinarySearchTree.hpp"

void BST:: SearchAndAdd(Node *&subNode,Tissue* tissue){
			if(subNode == NULL) subNode = new Node(tissue);
			else if(tissue->midNumber <= subNode->data->midNumber)
				SearchAndAdd(subNode->left,tissue);
			else if(tissue->midNumber > subNode->data->midNumber)
				SearchAndAdd(subNode->right,tissue);
			else return;
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
			delete DelNode->data;//tissue iadesi
			delete DelNode;
			
			return true;
		}
		int BST::postorder(Node *root,Tissue** tissues,int index){
		if (root == NULL)
        return index;

    	index = postorder(root->left, tissues, index);
    	index = postorder(root->right, tissues, index);
    	tissues[index++] = root->data;

    	return index;
		}
		Tissue** BST::postorderToArray(Node*root){

			Tissue** tissues = new Tissue*[20];
			postorder(root,tissues,0);
			return tissues;
		}

		void BST::mutateTheTree(Node*root){
			if(root->data->midNumber%50==0)
			{
				Tissue** tissues=postorderToArray(root);
				for(int i =0;i<20;i++){
					tissues[i]->mutateTheTissue();
					Radix* radix = new Radix(tissues[i]);
					tissues[i]->midNumber=radix->Sort();
					delete radix;
				}
					ClearForMutation();

				for(int j =0 ;j<20;j++ ){
					Add(tissues[j]);
				}
				
			}
			else{return;}
			
		}	
		BST::BST(){
			root = NULL;
		}
		bool BST:: isEmpty(){
			return root == NULL;
		}
		void BST::Add(Tissue* tissue){
			SearchAndAdd(root,tissue);
		}
		void BST:: Delete(Tissue* tissue){
			if(SearchAndDelete(root,tissue) == false) throw "Item not found.";
		}

		int BST:: isBalanced(Node*root){
			
			if (root == NULL){
				return 0;
			}
			
			int lh = isBalanced(root->left);
			if (lh == -1){
				return -1;
			}
				
			int rh = isBalanced(root->right);
			if (rh == -1){
				return -1;
			}
		
			if (abs(lh - rh) > 1){
				return -1;
			}
				
			else{
				return max(lh, rh) + 1;
			}
			
		}
		bool BST:: DeleteNodeForMutation(Node *&subNode){
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
		bool BST::isBalanced()
		{
			if(isBalanced(root)>0){
				return true;
			}
			else{
				return false;
			}
		}
		void BST:: Clear(){
			while(!isEmpty()) DeleteNode(root);// tissue adresleriyle beraber iade ediyorum
		}
		void BST::ClearForMutation(){// tissue adreslerini kullanacagim icin iade etmiyorum sadece agaci temizliyorum
			while(!isEmpty()) DeleteNodeForMutation(root);
		}
		void BST::mutateTheTree(){
			mutateTheTree(root);
		}	
		BST::~BST(){
			Clear();
		}

		