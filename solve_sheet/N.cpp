// Problem: N - Bars
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/N
// Memory Limit: 1024 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std ;
int sum=0,totl,n;
vector<int>v;
bool a=0;
void rec(int indx,vector<int>&sub){
	if(indx==n) {
		int sum=0;
		 for(int i=0,sz=sub.size();i<sz;i++){
		 	sum+=sub[i];
		 }
		 if(sum==totl){
		 	a=1;
		 }
		 return ;
	}
	
	
	sub.emplace_back(v[indx]);
	rec(indx+1,sub);
	sub.pop_back();
	rec(indx+1,sub);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>totl>>n;
		v.resize(n);
		for(auto &u:v) {
			cin>>u;
		}
		vector<int>sub;
		rec(0,sub);
		if(a){
			cout<<"YES"<<endl;
			a=0;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}