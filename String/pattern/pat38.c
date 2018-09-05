
#include<stdio.h>
int main()
{
   int i,j,n,k=1;
   scanf("%d",&n);
     for(i=1;i<=n;i++)
   {
       for(j=1;j<=2*i-1;j++)
       {
          if(j%2==1)
          {
            printf("%d",j);
             k++;
          }

       else
        printf("*");


       }


      printf("\n") ;
   }




}
