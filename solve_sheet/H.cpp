// Problem: H - Even odd subset
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/H
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std ;
int n;
vector<int>v,sub;
vector<vector<int>> vc;
void recsub(int indx) {
	if(n==indx) {
		vc.emplace_back(sub);
		return ;
	}
	
	sub.emplace_back(v[indx]);
	recsub(indx+1);
	sub.pop_back();
	recsub(indx+1);
	
}
int main () {
	cin>>n;
	v.resize(n);
	for(auto&u:v){
		cin>>u;
	}
	recsub(0);
	int cnt1=0,cnt2=0,ans=0;
	for(auto u:vc){
		cnt1=0,cnt2=0;
		for(auto i:u){
			 if(i%2==0){
					cnt1++;
				}
				else{
					cnt2++;
				}
			}
			if(cnt1>cnt2){
				ans++;
			}
			
	}
	cout<<ans<<endl;
	

}