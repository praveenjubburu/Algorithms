#include<bits/stdc++.h>
using namespace std;

const int mxn=1e5;

int ch[mxn][26];

void insert(string s){
	
	int u=0;
	for(int i=0;i<(int)s.size();i++){
		if(ch[u][s[i]-'a']==-1){
			ch[u][s[i]-'a']=u+1;
		}
		u=ch[u][s[i]-'a'];
		
	}
}

bool find(string s){
	
	int u=0;
	for(int i=0;i<(int)s.size();i++){
		if(ch[u][s[i]-'a']==-1)return false;
		u=ch[u][s[i]-'a'];
	}
	return true;
}

int main(){
	
	string s;
	cin>>s;
	
	int n=s.size();
	
	memset(ch,-1,sizeof ch);
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			insert(s.substr(i,j-i));
	     //	cout<<s.substr(i,j-i)<<endl;
		}
	}
	
	int q;
	
	cin>>q;
	
	while(q--){
		
		cin>>s;
		
		cout<<find(s)<<endl;
	}
}

