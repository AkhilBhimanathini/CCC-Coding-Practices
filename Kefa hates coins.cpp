/*

Kefa hates coins and thinks that coins are a currency of the poor.

She has N coins with her, ith of them having the value Ai.
She goes to a shop to buy M gifts, with the price of ith gift being Pi.

She wants to get rid of as many coins as she can and she buys the gift one by one from the 1st one to the Mth one. She adopts the following strategy while buying any particular gift i : She wants to give the shopkeeper a total of X coins whose value sum up to K such that -

K ≥ Pi
X is maximized
K - Pi is minimized
She does not consider other gifts while buying a particular gift i.e. while buying every gift she tries her best to satisfy the above conditions for that gift.

Your task is, given the array A and the array P, for every gift, find and print the values of X and K, or print -1 -1 if she will not be able to buy the gift at all.

INPUT
First line contains two numbers N and M.
Second line contains the array A of size N.
Third line contains the array P of size M.

INPUT
Print M lines of output, for every gift two integers on a new line.
The two integers should denote the values of X and K while buying that gift optimally.
If it is not possible to buy a particular gift with available coins, print "-1 -1"

CONSTRAINTS
1 ≤ N, M ≤ 105
1 ≤ Ai, Pi ≤ 105

Sample Input 0

10 5
1 2 3 4 5 1 2 3 4 5
6
6
6
6
6
Sample Output 0

4 6
2 6
2 8
2 10
-1 -1

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     long n,m;
    cin>>n>>m;
    vector<long> v(n);
    int val;
    long i,j;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    
    int s,f,c;
     for(i=0,j=0;i<m;i++)
     {
       cin>>val;
        s=0,f=0,c=0;
         while(s<val){
             if (j==n) {
                 f=1; 
                 break;
             }
             s+=v[j];
             j++;     
             c++;
        }
         
         if (f==1) cout<<-1<<" "<<-1<<endl;
         else cout<<c<<" "<<s<<endl;
         
     }
     
    return 0;
}
