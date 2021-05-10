/*

The Imperial Sum of an Array is defined as the maximum possible sum of a subsequence that can be obtained from an array with the constraint that no 2 elements in the chosen subsequence should be adjacent to each other in the given array.

Your task is given an array that does not contain any zeros or negative numbers, find its Imperial Sum.

Input Format

First line contains the size of the array N.
Second line contains N space separated positive integers denoting the elements of the array A[N].

Constraints

1 <= N <= 105

Output Format

Output one number that is equal to the Imperial Sum of the Array.

Sample Input 0

4
3 2 7 10
Sample Output 0

13
Sample Input 1

5
3 2 5 10 7
Sample Output 1

15

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    int in=a[0],ex=0;
    int x=0;
    for(int i=1;i<n;i++){
        x=max(in,ex);
        in=ex+a[i];
        ex=x;      
    }
    
    cout<<max(in,ex);
    
    
    return 0;
    
}
