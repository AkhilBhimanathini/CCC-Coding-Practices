/* 

Pucca and Garu are playing a card game that is explained as follows :
1. N number of cards are placed in a straight line.
2. Cards are numbered 1 to N from left to right and the ith card has a number Ai written on it.
3. Pucca plays first, then Garu, then Pucca and so on.
4. In each turn a player can choose one card, either the rightmost card or the leftmost card.
5. Whatever card a player chooses, the number on that card is added to the players score and the card is removed from the game.
6. The game ends when there are no other cards to pick.
7. At the end of the game, the player with the maxmimum score wins.
8. If both players have equal scores, then Pucca wins.

Pucca and Garu are feeling lazy on this sunday afternoon and have asked you to write a program to determine who the winner of the game will be.

INPUT

First line contains the number of cards N. (1 <= N <= 105)
Second line contains N space separated integers, ith of them denoting Ai. (1 <= Ai <= 106)

OUTPUT

Print "Pucca" (without quotes) if Pucca wins or "Garu" (without quotes) if Garu wins.

Sample Input 0

5
9 3 7 4 8
Sample Output 0

Pucca
Explanation 0

Turn 1 : Pucca Takes 9 (Pucca - 9 || Garu - 0 )
Turn 2 : Garu Takes 8 (Pucca - 9 || Garu - 8 )
Turn 3 : Pucca Takes 4 (Pucca - 13 || Garu - 8 )
Turn 4 : Garu Takes 7 (Pucca - 13 || Garu - 15)
Turn 5 : Pucca Takes 3 (Pucca - 16 || Garu - 15)
Pucca wins


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


*/


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    cin>>n;
    vector<long> v(n);
    for(long i=0;i<n;i++){
        cin>>v[i];
    }
    long i=0,j=n-1;
    long p=0,g=0;
    long t=0;
    while(i<=j){
        if (t%2==0){
          if (v[i]>=v[j]){
              p+=v[i];
                  i++;
              }
             else{
                 p+=v[j];
                     j--;
             }
            }
        else{
              if (v[i]>=v[j]){
              g+=v[i];
                  i++;
              }
             else{
                 g+=v[j];
                     j--;
             }  
        }
        t++;
    }
   // cout<<p<<g;
    if (p>g) cout<<"Pucca";
    else if (p<g) cout<<"Garu";
    return 0;
}
