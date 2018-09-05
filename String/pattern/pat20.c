#include<stdio.h>
int main()
{
 int i,j,n,k;
 scanf("%d",&n);
 k=2*n-1;
 for(i=1;i<=2*n-1;i++)
 {

    for(j=1;j<=2*n-1;j++)
    {
       if(i==j||j==k)
       {
           printf(" ");
       }
       else
        printf("*");

    }
     k--;
    printf("\n");



 }



}
