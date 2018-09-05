#include<stdio.h>
int main()
{
  int i,j,k,n;
   scanf("%d",&n);
   k=2*n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=2*n+1;j++)
       {

           if(j<=n+1-i||j>=n+1+i&&j<=2*n+1)
            printf("*");
           else
            printf(" ");
           }
       printf("\n");

   }


    for(i=1;i<=n-1;i++)
   {
       for(j=1;j<=2*n+1;j++)
       {

           if(j<=i+1||j>=k&&j<=2*n+1)
           {
                printf("*");

           }

           else
            printf(" ");
           }
           k--;
       printf("\n");

   }








}
