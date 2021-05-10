/*


You are in a 2D maze of dimensions N x M. Your initial position is (1,1) and your final position is (N,M).

The cell(i,j) has value A[i][j]. The cost of travelling any path in this maze is equal to the sum of values of all cells that you have visited while travelling the path.

From a cell (i,j) you can only go either right, or down, i.e. you can only go to (i + 1, j) or (i, j + 1). Note that at any point you cannot leave the grid.

Your task is to calculate the minimum cost that it would take you to go from the initial position to the final position.

Input
First line contains two integers N and M. Next N lines each contain M integers denoting the values of A[i][j]

Output
Print the minimum cost of travel

Notes
All input values do not exceed 1000

Sample Input 0

3 3
1 1 2
2 3 1
2 2 1
Sample Output 0

6


*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll n,m,i,j;
    cin>>n>>m;
    ll a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll dp[n+1][m+1];
    dp[1][1]=a[0][0];
    for(i=2;i<=m;i++){
        dp[1][i]=dp[1][i-1]+a[0][i-1];
        
    }
    
     for(i=2;i<=n;i++){
        dp[i][1]=a[i-1][0]+dp[i-1][1];
        
    }
    
    for(i=2;i<=n;i++){
        for(j=2;j<=m;j++){
            dp[i][j]=min(dp[i-1][j]+a[i-1][j-1],dp[i][j-1]+a[i-1][j-1]);
        }
    }
    /*
       for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cout<<dp[i][j]<<" ";
            
        }
        cout<<"\n";
    }   */
   cout<<dp[n][m];
    return 0;
}
