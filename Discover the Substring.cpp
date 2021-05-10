/*

strstr is a function that returns 1 if one string is present as substring in another and 0 otherwise. You are to write a program to print the number of times one string is present in the other as a substring.

Input Format

Two lines of input consisting of two strings.

Constraints

1 <= length of strings <= 100

Output Format

Output one number, the number of times any one string appears in the other.

Sample Input 0

banana
ana
Sample Output 0

2
Explanation 0

b(ana)na and ban(ana) so answer is 2

Sample Input 1

a
adamant
Sample Output 1

3
Explanation 1

(a)damant, ad(a)mant and adam(a)nt. So answer is 3.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string s,s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    if (n>=m){
        s=s1;
        s1=s2;
    }
    else{
        s=s2;
    }
    int i,j,c=0;
    int p=s.size();
    int q=s1.size();
    for(i=0;i<=p-q;i++){

        for(j=0;j<q;j++){
            if (s[i+j]!=s1[j]) break;
        }
        
        if (j==q) c++;
        
    }
    
    cout<<c;
    

    return 0;
}
