/*

Given a string, find the smallest string that can generate the original string by concatenation. See example case for clarity.

Input Format

One string. String is guaranteed to contain lowercase letters only.

Constraints

1 <= length of string <= 5000

Output Format

Print the smallest string that can be repeated to get the original string.

Sample Input 0

abababab
Sample Output 0

ab

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin>>s;
    int i,j;
    int l=s.size();
    for(i=1;i<=l;i++){
        string ans="",temp="";
        if (l%i==0){
            for(j=0;j<i;j++){
                ans+=s[j];
            }
            for(j=0;j<l/i;j++){
                temp+=ans;
            }
            if (s==temp){
                cout<<ans;
                return 0;
            }
        }
    }
    return 0;
}
