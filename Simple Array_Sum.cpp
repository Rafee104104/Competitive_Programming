#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned short int a;
    scanf("%hd",&a);
    int  sum=0,ar[a];
    for(unsigned short i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    for( unsigned short i=0;i<a;i++){
        sum+=ar[i];
    }
    printf("%d",sum);
    return 0;
}
