/*

----------LONGEST COMMON SUBSTRING------------

You are given two sequences of integers A(1,2...N) and B(1,2...M).

A new function F(A, B) has been devised to calculate the similarity between two integer sequences. Your task is to calculate F(A, B).

F(A, B) is the maximum possible number k such that there exists a certain i and a certain j with the following properties -

1 ≤ i ≤ i + k - 1 ≤ N
1 ≤ j ≤ j + k - 1 ≤ M
For every p = {0,1,2..k-1}, Ai+p = Bj+p
Input

First line contains the value of integer N.
Second line contains the elements of sequence. A.
Third line contains the value of integer M.
Fourth line contains the elements of the sequence B.

Output

Print one number, the value of F(A, B)

Notes

N and M do not exceed 1000.
The elements in the sequence fit in a 32-bit integer.

Sample Input 0

5
1 2 3 4 5
6
3 4 5 6 7 8
Sample Output 0

3

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
    ll n,i,j,maxim=0;
    cin>>n;
    ll a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    ll m;
    cin>>m;
    ll b[m+1];
    for(i=1;i<=m;i++){
        cin>>b[i];
    }
    ll c[1005][1005];
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++)
        {
            if (i==0 || j==0) c[i][j]=0;
            else if (a[i]==b[j]) c[i][j]=c[i-1][j-1]+1;
            else if (a[i]!=b[j]) c[i][j]=0;
            maxim=max(maxim,c[i][j]);
        }
    }
    
    cout<<maxim;
    return 0;
}
