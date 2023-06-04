#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;

int p[mxn],r[mxn];

void make_set(int v){
	p[v]=v;
	r[v]=0;
} 

int find(int v){
	if(v==p[v]){
		return p[v];
	}
	return p[v]=find(p[v]);
}

void make_union(int v,int u){
	v=find(v);
	u=find(u);
	if(v!=u){
		if(r[v]<r[u]){
			swap(v,u);
		}
		p[u]=v;
		if(r[u]==r[v]){
			r[v]++;
		}
	}
}

int main(){
	
}
