// Problem: I - Hexadecimal's Numbers
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/I
// Memory Limit: 64 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
int n,ans=0;
void rec(int x)
{
	if(x>n)
	{
		return ;
	}
	ans++;
	rec(x*10);
	rec(x*10+1);
}
int main()
{
	cin>>n;
	rec(1);
	cout<<ans;
}