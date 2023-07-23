#include<bits/stdc++.h>
using namespace std;
const int mxn=40;
int a[mxn];
int main(){
	int n,x;
	cin>>n>>x;
	vector<int>A,B;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int n1=n/2;
	int n2=n-(n/2);
	for(int i=0;i<n1;i++){
		A.push_back(a[i]);
	}
	for(int i=0;i<n2;i++){
		B.push_back(a[i+n1]);
	}
	map<int,int>mt;
	for(int i=0;i<(1<<(n1));i++){
		long long s=0;
		for(int j=0;j<n1;j++){
			if(i&(1<<j)){
				s+=A[j];
			}
		}
		mt[s]++;
	}
	int ans=mt[x];
	cout<<endl;
	for(int i=0;i<(1<<(n2));i++){
		long long s=0;
		for(int j=0;j<n2;j++){
			if(i&(1<<j)){
				s+=B[j];
			}
		}
		ans+=mt[x-s];
	}
	cout<<ans<<endl;
	return 0;
}
