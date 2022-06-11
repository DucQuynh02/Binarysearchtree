#include <iostream>

using namespace std;
struct TreeNode{
	int key;
	TreeNode *left, *right;
};

TreeNode *creat_node(int x){
	TreeNode *n= new TreeNode();
	n->key=x;
	n->left=NULL;
	n->right=NULL;
}

TreeNode *insert(int x,TreeNode *root){
	if(root==NULL) return creat_node(x);
	if(x<root->key){
		root->left=insert(x,root->left);
	}
	else root->right=insert(x,root->right);
	return root;
}

void printInorder(TreeNode *root){
	if(root!=NULL){
		printInorder(root->left);
		cout<<root->key<<"   ";
		printInorder(root->right);
	}
}

int main(){
	int keys[]={10,25,5,7,36,21};
	TreeNode *root=NULL;
	for(int i=0;i<6;i++) root=insert(keys[i],root);
	printInorder(root);
	return 0;
	//sua file
}
