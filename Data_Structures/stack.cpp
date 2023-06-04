#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;

string isBalenced(string s){
	stack<char>st;
	
	for(int i=0;i<(int)s.size();i++){
		if(s[i]==')'){
			if(st.size()==0||st.top()!='('){
				cout<<i;
				return "Not Balenced";
			}
			st.pop();
		}else{
			st.push(s[i]);
		}
	}
	
	if(st.size()!=0){
		return "Not Balenced";
	}
	
	return "Balenced";
}

int main(){
	
	
	string s;
	cin>>s;
	
	cout<<isBalenced(s)<<endl;
	
	return 0;
}
