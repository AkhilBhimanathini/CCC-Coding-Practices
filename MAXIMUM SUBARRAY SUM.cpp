/*


FIND THE SUM OF THE MAXIMUM SUBARRAY.

Input Format

First line contains N value denoting number of integers

Next line contains N integers seperated by a space.

Constraints

1<=N<1000000

-10000<=a[i]<=10000

Output Format

A single integer denoting sum of the maximum sub array

Sample Input 0

8
-1 2 4 -3 5 2 -5 2
Sample Output 0

10


*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long n;
    cin>>n;
    long a[n];
    long i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    long cur=a[0];
    long maxso=a[0];
    for(i=1;i<n;i++){
        cur=max(a[i],cur+a[i]);
        maxso=max(cur,maxso);
    }
    
    cout<<maxso;
    return 0;
}