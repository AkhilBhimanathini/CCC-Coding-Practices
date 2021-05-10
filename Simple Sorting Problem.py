'''


Your task is simple (lol). Given N numbers, print them in ascending order.

You may use any sorting algorithm.
You are advised to use MergeSort.

Input Format

First line contains the size of array N.

Next N lines contains one number each.

Constraints

1 <= N = 2x10^5
1 <= ar <= 10^(10^6)

The total number of digits across all the elements of the array will not exceed 10^6.

Output Format

Print each element of the sorted array on a new line.

Sample Input 0

6
31415926535897932384626433832795
1
3
10
3
5
Sample Output 0

1
3
3
5
10
31415926535897932384626433832795


'''

n=int(input())
l=[]
for i in range(n):
    l.append(input())
ans=sorted(sorted(l),key=len)
for i in ans:
    print(i)

