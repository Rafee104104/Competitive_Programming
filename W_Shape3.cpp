/*
Url:

https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

*/
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }
        for(int j=0; j<2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
/*
4
    *
   ***
  *****
 *******
*/


//4
//
// *****
//  ***
//   *
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


