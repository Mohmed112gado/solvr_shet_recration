// Problem: B - LLPS
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std ;
vector<vector<string>> ans1;
vector<string> s;
string w,Max_str;
int sz;
bool plandrom(string s) {
    string a = s;
    reverse(a.begin(), a.end());
    for(int i = 0, sz = a.size(); i < sz; i++) {
        if(a[i] != s[i]){
            return 0;
        }
    }
    return 1;
}
void rec(int i,string ans) {
	    // base case
	if(i==sz) {
		if(plandrom(ans)){
			Max_str=max(Max_str,ans);
		}
		return ;
	}
	 // Transition
	 // take
	rec(i+1,ans+string(1,w[i]));
	//leve
	rec(i+1,ans);
}
int main (){
        cin>>w;
        Max_str="";
        sz=w.size();
        rec(0,"");
        cout<<Max_str;
}
