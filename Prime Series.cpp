/*

Identify and print the following pattern generated by prime numbers for a given N.

N = 1
2

N = 2
2
3 5

N = 3
2
3 5
7 11 13
Input
Input consists of a single integer N

Output
Output must consists of the pattern as shown above.

Sample Input 0

3
Sample Output 0

2
3 5
7 11 13


*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int prime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int i,j;
    int num=2;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            
            while(!prime(num)) {
                ++num;
            }
                cout<<num++<<" ";
         
        }
        cout<<"\n";
    }
    return 0;
}