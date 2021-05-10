'''


Longest Common Prefix of two strings is the longest possible string that is a prefix of both the strings.
Your task is to write a program that takes as input an array of strings and returns the longest common prefix for all the strings i.e. the longest string that is a prefix of every string in the array.

Input Format

First line contains an integer N.
Next N lines contain one string each.

Constraints

1 <= N <= 1000 1 <= length of string <= 1000

Output Format

Output one string, the longest common prefix of all strings.

Sample Input 0

3
abcdefgh
aefghijk
abcefgh
Sample Output 0

a


'''

n=int(input())
l=[]
for i in range(n):
    l.append(input())
    
l.sort(key=lambda k : len(k))
#print(l)
ans=""
for i in range(len(l[0])):
    s=l[0][i]
    c=0
    for j in range(1,len(l)):
        if s==l[j][i]:
            c+=1        
    if j==c:
        ans+=s
    else:
        break
print(ans)
        
