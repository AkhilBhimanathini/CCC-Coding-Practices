/*


Given an array of N integers, your task is to print the highest possible product by multiplying any three numbers from the array.

Input Format

First line contains an integer N.
Next line contains N space separated integers.

Constraints

1 <= N <= 106
0 <= |Ai| <= 103

Output Format

Output one numbers, the maximum product.

Sample Input 0

6
0 -1 3 100 70 50
Sample Output 0

350000

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
    vector<long> v(n);
    for(long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long m=max(v[n-3]*v[n-2]*v[n-1],v[0]*v[1]*v[n-1]);
    cout<<m;
    return 0;
}
