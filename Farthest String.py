'''

We define the Palindromic Distance of a String as the minimum number of characters that need to be modified in order to turn the String into a palindrome.

For example :

"cook" -> "cooc" (Palindrome),
Hence Distance("cook") = 1.

"fluffy" -> "flufff" -> "ffufff" -> "ffffff" (Palindrome),
Hence Distance("fluffy") = 3.

Now, you are given N number of strings, and your task is to find out which string has the farthest Distance from being a palindrome and print it.

INPUT
First line contains number of strings N.
Next N lines each contain one string.

OUTPUT
Print one string that is the farthest out of all strings from being a palindrome.

CONSTRAINTS
1 ≤ N ≤ 103
Each string has length of atmost 1000
Strings consists of lowercase english characters only

Sample Input 0

7
philosopher
chamber
prisoner
goblet
phoenix
halfbloodprince
deathlyhallows
Sample Output 0

halfbloodprince

'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
c1,c2=0,0
for i in range(n):
    s=input()
    k=len(s)
    for j in range(k//2):
        if s[j]!=s[k-j-1]:
            c2+=1
    if (c2>c1):
        ans=s
        c1=c2
    c2=0
    
print(ans)