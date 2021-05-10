/*

You are given a string of 1s and 0s only and a number K.

Your task is to write a program that convert the given string to a string that consists of all 1s.

But there's a catch. You are only allowed to use one kind of operation :

Take exactly k consecutive elements of the string and apply the flip operation on every element, ie. change 1 to 0 and 0 to 1.

Each operation takes 1 second so you have to print the minimum time required to make the string of 1's only. If not possible print -1.

Input Format

First line contains T, the number of test cases.
Each of next T lines contain one test case in the form of a string followed by the number K.

Constraints

1 ≤ T ≤ 100
2 ≤ K ≤ length of S.

Output Format

For each test case, output one line containing the answer i.e the minimum time to make the string of 1's only and -1 if not possible.

Sample Input 0

3
00010110 3
11111 4
01010 4
Sample Output 0

3
0
-1
Explanation 0

In 1 testcase- You can get 1 by first changing the leftmost 3 elements, getting to 11110110, then the rightmost 3, getting to 11110001, and finally the 3 left out 0's to 11111111; In 3 sec.

In 2 testcase- String consist of only 1's so no change needed.

In 3 testcase- There is no way to make the string of only 1's so -1.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--){
        string s;
        int k,i,j;
        cin>>s>>k;
        int n=s.size();
        int c=0;
        for(i=0;i<=n-k;i++){
            if (s[i]=='0'){
                c++;
                
                for(j=i;j<i+k;j++)
                s[j]= (s[j]=='1')? '0':'1';
            }
        }
        
        bool f=false;
        for(i=n-k+1;i<n;i++){
            if (s[i]=='0') f=true;
        }
        
        if (f) cout<<"-1\n";
        else cout<<c<<"\n";
    }
    return 0;
}
