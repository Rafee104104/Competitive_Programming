/*
K. Max and Min
Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ar[3],Max=-1000000,Min=1000000;
    scanf("%d %d %d",&ar[0],&ar[1],&ar[2]);
    for(unsigned short int i=0;i<3;i++){
      if(ar[i]>Max)Max=ar[i];
    }
    for(unsigned short int i=0;i<3;i++){
      if(ar[i]<Min)Min=ar[i];
    }
    printf("%d %d",Min,Max);  
    return 0;
}
