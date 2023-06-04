#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5;


void twoDimensionalArray(int n,int m){
	
	int **a=new int*[n];
	
	for(int i=0;i<n;i++){
		a[i]=new int[m];
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
	
	
void oneDimensionalArray(int n){
	
	int *a=new int[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}


int main(){
	
	int n,m;
	scanf("%d%d",&n,&m);
	
}

