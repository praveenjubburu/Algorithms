#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;

int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int &i:a){
		cin>>i;
	}
	// all permuations of the numbers 
	
	function<void(vector<int>)>print=[&](vector<int>a){
		for(int i=0;i<(int)a.size();i++){
			cout<<a[i]<<" ";
		}
	};
	
	do{
		cout<<endl;
		print(a);
	}while(next_permutation(a.begin(),a.end()));
	
	
	
	
}

		

