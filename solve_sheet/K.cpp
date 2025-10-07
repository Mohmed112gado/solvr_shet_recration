// Problem: K - Preparing Olympiad
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/K
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Gado
// Powered by CP Editor (https://cpeditor.org)
#include<bits/stdc++.h>
using namespace std ;
int n,l,r,x;
vector<int>v;
int ans=0;
int rec(int indx,vector<int>&sub) {
	if(indx==n) {
		
		if(sub.size()<2){
			return  0 ;
		}
		
		int sum=accumulate(sub.begin(),sub.end(),0);
		int max_val=*max_element(sub.begin(),sub.end());
		int min_val=*min_element(sub.begin(),sub.end());
		if(sum>=l and sum<=r and abs(max_val-min_val)>=x){
			ans++;
		}
		return 0 ;
		
	}
	
	sub.emplace_back(v[indx]);
	rec(indx+1,sub);
	sub.pop_back();
	rec(indx+1,sub);
	return ans;
	
}
int main () {
	cin>>n>>l>>r>>x;
	v.resize(n);

	for(auto &u:v)cin>>u;
		vector<int>sub;
  cout<< rec(0,sub);
   //cout<<ans;
}