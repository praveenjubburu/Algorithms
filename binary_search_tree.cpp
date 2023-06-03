#include<bits/stdc++.h>
using namespace std;

struct binarySearchTree{
	int val;
	binarySearchTree*left=NULL;
	binarySearchTree*right=NULL;
};

binarySearchTree* creatNewNode(int val){
	binarySearchTree *newNode=new binarySearchTree();
	newNode->val=val;
	return newNode;
}



binarySearchTree* insert(binarySearchTree*root,int val){
	if(root==NULL){
		return creatNewNode(val);
		
	}
	if(val <= root->val){
		root->left=insert(root->left,val);
	}else{
		root->right=insert(root->right,val);
	}
	return root;
}

void print(){
	
	//print the values using dfs or bfs
	
}

int main(){
	int n;
	cin>>n;
	binarySearchTree *root=NULL;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		root=insert(root,val);
	}
	print();
}


