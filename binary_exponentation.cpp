#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;
int a[mxn];


#define ll long long 

ll binary_exponentation(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1L){
			ans=ans*a;
		}
		a=a*a;
		b>>=1;
	}
	return ans;
}


int main(){
	
	ll a,b;
	cin>>a>>b;
	
	// binary exponentation used to calculate the power of number log(n) time complexity 
	
	cout<<binary_exponentation(a,b)<<endl;
	
}

