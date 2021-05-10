/*


Bug has a string S and a smaller string T. Bug needs to find how many times T occurs in S as a substring. Help him with the task.

Input Format

First line contains the string S. Second line contains the string T.

Constraints

1 <= |S| <= 100 1 <= |T| <= |S|

Output Format

Output the number of times T occurs in S.

Sample Input 0

bugsbunnywritesbuggycodes
bug
Sample Output 0

2
Explanation 0

bugs comes twice in the string S.


*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,s1;
    cin>>s>>s1;
    int n=s.size();
    int m=s1.size();
    int i,j,k;
    int c=0;
    for(i=0;i<=n-m;i++){
        
        for(j=i,k=0;j<i+m;j++,k++){
            if (s[j]!=s1[k]) break;
        }
        
        if (k==m) 
        {
            c++;
        }

    }
    
    cout<<c;
    return 0;
}
