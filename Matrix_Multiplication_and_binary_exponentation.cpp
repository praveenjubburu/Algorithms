#include<bits/stdc++.h>
using namespace std;
#define mat vector<vector<int>>

mat fib(mat &a,mat &b){
	int n=a.size();
	int m=b[0].size();
	vector<vector<int>>c(n,vector<int>(m));
	for(int i=0;i<(int)a.size();i++){
		for(int j=0;j<(int)b[0].size();j++){
			for(int k=0;k<(int)b.size();k++){
				c[i][j]+=a[i][k]*b[j][k];
			}
		}
	}
	return c;
}

int main(){
	int n;
	cin>>n;
	mat a={{0,1}};
	mat b={{0,1},{1,1}};
	while(n){
		if(n&1){
			a=fib(a,b);
		}
		b=fib(b,b);
		n=n>>1;
	}
	cout<<a[0][0]<<endl;
}
