#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;
int a[mxn],dp[mxn];
int n;

int longestIncresingSubSequence(){
	
	vector<int>k;
	
	// binary search takes O(nlogn) time complexity
	
	for(int i=0;i<n;i++){
		int p=lower_bound(k.begin(),k.end(),a[i])-k.begin();
		if(p<(int)k.size()){
			k[p]=a[i];
		}else{
			k.push_back(a[i]);
		}
		
	}
	return k.size();
	
}

int longestIncresingSubSequenceDp(){
	
	//dp takes O(n^2) time complexity 
	
	memset(dp,0,sizeof dp);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,dp[i]);
	}
	return ans;
	
	
}
int main(){
	

	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

    cout<<longestIncresingSubSequence()<<endl;
    cout<<longestIncresingSubSequence()<<endl;
	
}

