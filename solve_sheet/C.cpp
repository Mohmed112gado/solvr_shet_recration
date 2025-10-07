// Problem: C - Apple Division
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/C
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std; 
const int  N = 20;
bool vis[N];
int n;
vector<int>v;
int rec_sum_AB(int indx){
	if(indx==n){
		int A=0,B=0;
		for(int i=0;i<n;i++){
			if(vis[i]){
				A+=v[i];
			}else{
				B+=v[i];
			}
		}
		return abs(A-B);
	}
vis[indx]=1;
int ret1=rec_sum_AB(indx+1);
vis[indx]=0;
int ret2=rec_sum_AB(indx+1);
	return min(ret1,ret2);
}
int main (){
	cin>>n;
	v.resize(n);
	for(auto &u:v){
		cin>>u;
	}
	cout<<rec_sum_AB(0);
}