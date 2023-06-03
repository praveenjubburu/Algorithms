#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;
int main(){
	int n;
	cin>>n;
	
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i&1<<j){
				cout<<j<<" ";
			}
		}
		cout<<endl;
	
	}
	
	return 0;
}

		

