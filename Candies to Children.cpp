/*

There are N children standing in a line. Each child is assigned a rating value.

You are giving candies to these children subjected to the following requirements:
- Each child must have at least one candy.
- Children with a higher rating get more candies than their neighbors.

What is the minimum candies you must give?

Input Format

First line contains an integer N.
Next line contains N space separated integers.

Constraints

1 <= N <= 106
1 <= Ai <= 103

Output Format

Output the minimum number of candies you can give out.

Sample Input 0

2
1 2
Sample Output 0

3
Explanation 0

The candidate with 1 rating gets 1 candy and candidate with rating cannot get 1 candy as 1 is its neighbor. So rating 2 candidate gets 2 candies. In total, 2+1 = 3 candies need to be given out.


*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        b[i]=1;
    }
    
    for(i=1;i<n;i++){
        if (a[i]>a[i-1]){
            b[i]=b[i]+b[i-1];
        }
    }
    
    for(i=n-2;i>=0;i--)
    {
        if (a[i]>a[i+1] && b[i]<b[i+1]+1){
            b[i]=b[i+1]+1;
        } 
    }
    int c=0;
    for(int i=0;i<n;i++){
        c+=b[i];
    }
    cout<<c;
    return 0;
}
