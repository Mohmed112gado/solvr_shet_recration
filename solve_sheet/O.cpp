// Problem: O - Game 23
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/O
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std ;
long long  n,m,res1=-1,res2,nm;
void  rec(int i,int x)
{
if(x==m)
{
	res1=i;
}
else if(x>m)
{
	return ;
}

rec(i+1,x*2);
rec(i+1,x*3);

}
int main()
{
	cin>>n>>m;
	rec(0,n);
	cout<<res1;
}