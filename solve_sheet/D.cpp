// Problem: D - Chessboard and Queens
// Contest: Virtual Judge - Week #07 (Recursion and Backtracking)
// URL: https://vjudge.net/contest/664507#problem/D
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std ;
const int N=9;
char  grid[N][N];
bool vis_C[8],vis_R[8],vis_main_dig[16],vis_par_dig[16];
int rec_Q(int row){
	
    if(row==8) {
    	return 1;
    }
		
		
		int ans_to=0;
		for(int col = 0;col<8;col++){
			if(grid[row][col]!='.' or vis_C[col] or vis_R[col] or vis_main_dig[7-col+row] or vis_par_dig[col+row] ){
				continue;
			}
			
			
			//Reset Q
			grid[row][col]='Q';
			vis_C[col]=1;
			vis_R[col]=1;
			vis_main_dig[7-col+row]=1;
			vis_par_dig[col+row]=1;
			ans_to+=rec_Q(row+1);
			// Delet Q
			grid[row][col]='.';
			vis_C[col]=0;
			vis_R[col]=0;
			vis_main_dig[7-col+row]=0;
			vis_par_dig[col+row]=0;
		
		
	}
	return ans_to;
}
int main (){
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		
		{
			cin>>grid[i][j];
		}
	}
	cout<<rec_Q(0);
}