#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;

int n;

struct{
	int val;
	int min;
	int sum;
	int max;
}sg[mxn];

int find_sum(int i,int j,int v=1,int l=0,int r=n-1){
	if(l>=i&&r<=j){
		return sg[v].sum;
	}
	
	if(l>r){
		return 0;
	}
	
	int m=(l+r)/2;
	return find_sum(i,j,2*v,l,m)+find_sum(i,j,2*v+1,m+1,r);
}

int find_min(int i,int j,int v=1,int l=0,int r=n-1){
	if(l>=i&&r<=j){
		return sg[v].min;
	}
	if(l>j|| r<i){
		return INT_MAX;
	}
	int m=(l+r)/2;
	return min(find_min(i,j,2*v,l,m),find_min(i,j,2*v+1,m+1,r));
}

int find_max(int i,int j,int v=1,int l=0,int r=n-1){
	
	if(l>=i&&r<=j){
		return sg[v].max;
	}
	if(l>j|| r<i){
		return INT_MIN;
	}
	int m=(l+r)/2;
	return max(find_max(i,j,2*v,l,m),find_max(i,j,2*v+1,m+1,r));
}

void insert(int val,int pos,int v=1,int l=0,int r=n-1){
	
	if(l==r){
		sg[v].sum=val;
		sg[v].max=val;
		sg[v].min=val;
		return;
	}else{
		int m=(l+r)/2;
		if(pos<=m){
			insert(val,pos,2*v,l,m);
		}else{
			insert(val,pos,2*v+1,m+1,r);
		}
		sg[v].sum=sg[2*v].sum+sg[2*v+1].sum;
		sg[v].max=max(sg[2*v].max,sg[2*v+1].max);
		sg[v].min=min(sg[2*v].min,sg[2*v+1].min);
	}
}

int main(){
	
	//segment tree used to calculate the min,max,sum of 1-n in log time
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		insert(x,i);
	}
    
    cout<<find_max(0,n-1)<<endl;
    cout<<find_min(0,n-1)<<endl;
    cout<<find_sum(0,n-1)<<endl;
	
}
