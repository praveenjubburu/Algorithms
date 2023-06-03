#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;




struct LinkedList{
	int val;
	LinkedList *next=NULL;
	LinkedList *back=NULL;
};

LinkedList *head=NULL;

LinkedList* createNewLink(int val){
	LinkedList *newLink=new LinkedList();
	newLink->val=val;
	newLink->next=NULL;
	newLink->back=NULL;
	return newLink;
}


void insert(int val){
	if(head==NULL){
		head=createNewLink(val);
		return;
	}
	LinkedList *newLink=createNewLink(val);
	head->back=newLink;
	newLink->next=head;
	head=newLink;
	return;
}

void print(){
	
	LinkedList*last=NULL;
	cout<<"forword"<<endl;
	while(head!=NULL){
		cout<<head->val<<"--->";
		last=head;
		head=head->next;
	}
	
	cout<<endl;
	cout<<"back words"<<endl;
	
	while(last!=NULL){
		cout<<last->val<<"<---";
		last=last->back;
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

