/*

Given an array A = {a1, a2, a3..} of N elements, find the maximum possible sum of a

Contiguous subarray
Non-contiguous (not necessarily contiguous) subarray.
Empty subarrays/subsequences should not be considered.

Input Format

First line of the input has an integer T. T cases follow.
Each test case begins with an integer N. In the next line, N integers follow representing the elements of array A.

Constraints

1 <= T <= 10
1 <= N <= 10^5
-10^4 <= ai <= 10^4

The subarray and subsequences you consider should have at least one element

Output Format

Two, space separated, integers denoting the maximum contiguous and non-contiguous subarray. At least one integer should be selected and put into the subarrays (this may be required in cases where all elements are negative).

Sample Input 0

2
4
1 2 3 4
6
2 -1 2 3 4 -5
Sample Output 0

10 10
10 11

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
    int t;
    cin>>t;
    while(t--){
        long n,i;
        cin>>n;
        long a[n],s=0;
        for(i=0;i<n;i++){
            cin>>a[i];Maximum Sum in an Array
        }Maximum Sum in an Array

        long curmax=a[0],maxso=a[0];
        for(i=1;i<n;i++){
            curmax=max(a[i],curmax+a[i]);
            maxso=max(maxso,curmax);
          }
    
        sort(a,a+n);
        i=n-1;
        do{
            s+=a[i];
            i--;
        }
        while(i>=0 && s+a[i]>=s);
        
        cout<<maxso<<" "<<s<<endl;
    }
    
    return 0;
}

