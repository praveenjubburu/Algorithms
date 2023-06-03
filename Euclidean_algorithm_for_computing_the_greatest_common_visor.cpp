#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;

int gcd(int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int lcd(int a,int b){
	return (a*b)/gcd(a,b);
}

int main(){
	
	int a,b;
	cin>>a>>b;
	
	cout<<"gcd of two numbers "<<gcd(a,b)<<endl;
	cout<<"lcd of two numbers "<<lcd(a,b)<<endl;
	
	return 0;
	
}
