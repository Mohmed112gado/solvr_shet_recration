// Problem: J - Tavas and SaDDas
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/J
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
long long n,ans;
long long    rec( long long x ,long long i)
{
	if(x>n)
	{
		
		return -1;
	}
	if(n==x)
	{
		return i;
	}
	return max(rec(x*10+4,2*i+1),rec(x*10+7,2*i+2)); // add 4 binr tree	
	     // add 7 binry tree
}
int main() {
cin>>n;
//rec(0,0);
cout<<rec(0,0);
}
