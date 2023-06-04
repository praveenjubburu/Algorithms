#include<bits/stdc++.h>
using namespace std;

const int mxn=1e5;

int main(){
	
	string s;
	cin>>s;
	
	    ios::sync_with_stdio(false);
        cin.tie(0);
        
        
        int dp[1002][1002]={};array<int,2>ans={0,0};
        for(int i=s.size()-1;i>=0;i--){
            for(int j=i;j<(int)s.size();j++){
                if(i==j){
                    dp[i][j]=1;
                }else if(j-i==1&&s[i]==s[j]){
                    dp[i][j]=1;
                }
                else if(j-i>1&&s[i]==s[j]&&dp[i+1][j-1]){
                    dp[i][j]=1;
                }
                if(dp[i][j])ans=max(ans,{j-i+1,i});
            }
        }
        
        
         cout<<(s.substr(ans[1],ans[0]))<<endl;
         
         return 0;
         
	 }
