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

void dfs(binarySearchTree* node){
	
	if(node == NULL)return;
	
	cout<<node->val<<" ";
	
	dfs(node->left);
	dfs(node->right);
	
}

void bfs(binarySearchTree*head){
	
	queue<binarySearchTree*>q;
    q.push(head);
	while(q.size()){
		binarySearchTree* currNode=q.front();
		q.pop();
		cout<<currNode->val<<" ";
		if(currNode->left != NULL)q.push(currNode->left);
		if(currNode->right != NULL)q.push(currNode->right);
	}
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
	cout<<"depth first search"<<endl;
	dfs(root);
	cout<<endl;
	cout<<"breadth first search"<<endl;
	bfs(root);
}


