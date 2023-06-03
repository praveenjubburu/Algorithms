#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;




struct LinkedList{
	int val;
	LinkedList *next=NULL;
};

LinkedList *head=NULL;

LinkedList* createNewLink(int val){
	LinkedList *newLink=new LinkedList();
	newLink->val=val;
	newLink->next=NULL;
	return newLink;
}


void insert(int val){
	if(head==NULL){
		head=createNewLink(val);
		return;
	}
	LinkedList *newLink=createNewLink(val);
	newLink->next=head;
	head=newLink;
	return;
}

void print(){
	while(head!=NULL){
		cout<<head->val<<"--->";
		head=head->next;
	}
}


int main(){
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		insert(val);
	}
	print();
}

