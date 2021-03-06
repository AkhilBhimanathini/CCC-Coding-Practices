/*

You are given a total of N Dates. Each date has a day, a month and a year.

Your task is to write a program to sort these dates, from the dates occuring earlier to the dates occuring later

Input
First line contains the number of dates N.
Next N lines each contain three integers, day, month and year.

Output
Print one date per line, each date must be in the format : DD/MM/YYYY

Notes
1 ≤ N ≤ 100
Sample Input 0

4
9 8 1996
21 3 1996
12 1 1996
31 12 1997
Sample Output 0

12/01/1996
21/03/1996
09/08/1996
31/12/1997


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

  struct date{
        int d,m,y;
    };

int cmp(struct date *a, struct date *b){
    if (a->y>b->y) return 1;
    else if (a->y<b->y) return -1;
    else if(a->m>b->m) return 1;
    else if (a->m<b->m) return -1;
    else return a->d-b->d;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    struct date a[n];
    for(int i=0;i<n;i++){
        scanf("%d %d %d", &a[i].d, &a[i].m, &a[i].y);
    }
      qsort(a,n,sizeof(struct date),cmp);
     for(int i=0;i<n;i++){
        printf("%02d/%02d/%d\n", a[i].d, a[i].m, a[i].y);
        
    }
  
    return 0;
}
