/*

------------LONGEST COMMON SUBSEQUENCE-------------

You are given two sequences of integers A(1,2...N) and B(1,2...M).

A newer function F(A, B) has been devised to calculate the similarity between two integer sequences. Your task is to calculate F(A, B).

F(A, B) is the maximum possible number k such that there exists a certain set :
{a1, a2, ... ak} with a1 ≤ a2 ≤ ... ≤ ak
and another set
{b1, b2, ... bk} with b1 ≤ b2 ≤ ... ≤ bk
such that
for every i from 1 to k, we have Aai = Bbi.

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

6
1 2 3 4 5 6
6
2 1 4 3 6 5
Sample Output 0

3
Explanation 0

One possible set a and b with size 3 is : a = {1, 3, 5} and b = {2, 4, 6}, then , {A[a1], A[a2], A[a3]} = {B[b1], B[b2], B[b3]}


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
    ll n,i,j;
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
            else if (a[i]!=b[j]) c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
    
    cout<<c[n][m];
    return 0;
}