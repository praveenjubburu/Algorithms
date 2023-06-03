#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;
int a[mxn];


int main(){
	
	int n;
	cin>>n;
	
	memset(a,0,sizeof a);
	
	a[0]=a[1]=1;
	for(int i=2;i<=n;i++){
		if(a[i]==0){
			for(int j=i+i;j<=n;j+=i){
				a[j]=1;
			}
		}
	}
	
	cout<<"prime Numbers from 1 to n "<<endl;
	
	for(int i=0;i<=n;i++){
		if(a[i]==0){
			cout<<i<<" ";
		}
	}
	
}

