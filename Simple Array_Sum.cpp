/*The Link of the problem : 
https://www.hackerrank.com/challenges/simple-array-sum/problem

Tasnim Munawar Rafee
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    unsigned short int N,i;
    scanf("%hd",&N);
    int  sum=0,ar[N];
    for(i=0;i<N;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<N;i++){
        sum+=ar[i];
    }
    printf("%d",sum);
    return 0;
}
