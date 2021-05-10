/*


You are given an array of N integers A1, A2, A3... AN.

Your task is to write a program to print the maximum value f(i, j) for all 1 <= i,j <= N.

f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes the absolute value of x.

Input Format

First line contains N, the size of the array.

Second line contains N space separated integers, the elements of the array.

Constraints

1 <= N <= 106
1 <= Ai <= 106

Output Format

Output one integer, the maximum possible value of function f(i, j).

Sample Input 0

3
1 3 -1
Sample Output 0

5
Explanation 0

f(1, 1) = f(2, 2) = f(3, 3) = 0
f(1, 2) = f(2, 1) = |1 - 3| + |1 - 2| = 3
f(1, 3) = f(3, 1) = |1 - (-1)| + |1 - 3| = 4
f(2, 3) = f(3, 2) = |3 - (-1)| + |2 - 3| = 5

So, we return 5.


*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long n,i;
    cin>>n;
    vector <long> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    long m1=INT_MIN,m2=INT_MAX;
    long m3=INT_MIN,m4=INT_MAX;
    for(i=0;i<n;i++){
        m1=max(m1,a[i]+i);
        m2=min(m2,a[i]+i);
        m3=max(m3,a[i]-i);
        m4=min(m4,a[i]-i);
    }
    cout<<max(m1-m2,m3-m4);
    
    return 0;
}

