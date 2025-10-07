// Problem: E - Thanos Sort
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/E
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std ;
int n;
vector<int>v(20);
int rec_sort(int n,int arr[]){

	if(is_sorted(arr ,arr+n)){
		return n;
	}
	return max(rec_sort(n/2,arr),rec_sort(n/2,arr+(n/2)));
	
	
}
void solve() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0 ;i<n;i++){
		cin>>a[i];
	}
	cout<<rec_sort(n,a);
}
int main (){

	
	solve();
}