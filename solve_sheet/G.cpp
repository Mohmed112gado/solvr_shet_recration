// Problem: G - Subsets
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/G
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std ;

int n;
vector<int>v,sub;
vector<vector<int>>vc;
void rec_sub(int indx  ){
 if(indx==n) {
 	vc.emplace_back(sub);
 	return ;
 }
 
 sub.emplace_back(v[indx]);
 rec_sub(indx+1);
 sub.pop_back();
 rec_sub(indx+1);
}
int main () {
	
	cin>>n;
	v.resize(n);
	for(int i=0;i<n;i++) {
		cin>>v[i];
	}
	rec_sub(0);
	sort(vc.begin(),vc.end());
	for(auto &u:vc){
		for(auto &i:u){
			cout<<i<<" ";
		}
		cout<<endl;
	}	
	
	
	
	
}