// Problem: F - a-Good String
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/F
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace  std ;
#define  ll long long 
#define  sz(s) s.size()
#define  subfirsthaf(s) s.substr(0,sz(s)/2)
#define  subsechaf(s) s.substr(sz(s)/2,sz(s)/2)
#define  pb push_back
#define  ff fist 
#define  ss second 
#define  all(s) s.begin(),s.end()

int chak_good(string s, char c) {
	int cnt=0;
	for(int i=0,n=sz(s);i<n;i++){
		 if(s[i]!=c){
		 	cnt++;
		 }
	}
	return cnt;
}

int rec_make_good_string(string s , char c) {
	 // bacs case 
	 if(s.size() == 1) {
	 	return chak_good(s,c);
	 }
	     //
	 string first_hf=subfirsthaf(s);
	 string second_hfstr=subsechaf(s);
	  
	 int first_cost=chak_good(first_hf,c);
	 int second_cost=chak_good(second_hfstr,c);
	 
	 
	 int cost1=first_cost+rec_make_good_string(second_hfstr,c+1);
	 int cost2=second_cost+rec_make_good_string(first_hf,c+1);
	 
	 
	return min(cost1,cost2);
	
}
void input(){
	int n;cin>>n;
	string s;
	cin>>s;
	cout<<rec_make_good_string(s,'a');
}
int main (){
	int t;
	cin>>t; 
	while(t--){
		input();
		cout<<endl;
	}
} 