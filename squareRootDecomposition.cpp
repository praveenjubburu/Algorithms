#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;
int a[mxn],sg[mxn];


int main(){
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int x=sqrt(n+.0)+1;
	
	vector<int>sg(x,0);
	
	for(int i=0;i<n;i++){
		sg[i/x]+=a[i];
	}
	
	int i,j;
	cin>>i>>j;
	
	long long sum=0;
	
	for(int k=i;k<=j;){
		if(k%x==0 && i+x-1<=j){
			sum+=sg[k/x];
			k+=x;
		}else{
			sum+=a[i];
			k++;
		}
	}
	
	cout<<sum<<endl;
}

