#include<bits/stdc++.h>
using namespace std;


struct LinkedList{
	int val;
	LinkedList* next=NULL;
	LinkedList(int val){
		this->val=val;
	}
};

LinkedList* a[11];

LinkedList* createNewNode(int val){
	return new LinkedList(val);
}

void insert(int pos,int val){
	if(a[pos]==NULL){
		a[pos]=createNewNode(val);
		return;
	}
	LinkedList*newNode=createNewNode(val);
	newNode->next=a[pos];
	a[pos]=newNode;
}
	
bool find(int pos,int val){
	LinkedList* head=a[pos];
	while(head!=NULL){
		if(head->val==val)return true;
		head=head->next;
	}
	return false;
}

int main(){
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		int hash_code=x%11;
		insert(hash_code,x);
	}
	
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int x;
		cin>>x;
		int hash_code=x%11;
		bool isPresent=find(hash_code,x);
		if(isPresent){
			printf("%s","found The Value");
		}else{
			printf("%s","Not Found The Value");
		}
	}
	
}

