#include<bits/stdc++.h>
using namespace std;

const int mxn=1e5;

#define ar array

int main(){
	
	string s;
	cin>>s;
	
	int n=s.size();
	
	char c[mxn];
	
	c[0]='!';
	c[1]='*';
	for(int i=0;i<n;i++){
		c[2*i+2]=s[i];
		c[2*i+3]='*';
	}
	c[2*n+2]='^';
	
	int p[mxn];
	
	memset(p,0,sizeof p);
	
	int l=1,r=1;
	
	for(int i=1;i<2*n+2;i++){

		p[i]=max(0,min(p[l+(r-i)],r-i));
		
		while(c[i-p[i]]==c[p[i]+i]){
			p[i]++;
		}

		if(i+p[i]>r){
			r=i+p[i];
			l=i-p[i];
		}
	}
	
	ar<int,2>ans{0};
	
	for(int i=1;i<=2*n+2;i++){
		
		ans=max(ans,ar<int,2>{p[i],(i-p[i])/2});
		
	}
	for(int i=ans[1];i<ans[1]+ans[0];i++){
		cout<<s[i];
	}
	
	return 0;
}

