#include<stdio.h>
int main()
{

    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n+1;j++)
        {

           if(j==n+1)
            printf("*");
           else
            printf(" ");

        }
       printf("\n");

    }
 for(j=1;j<=2*n+1;j++)
        printf("*");
        printf("\n");
         for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n+1;j++)
        {

           if(j==n+1)
            printf("*");
           else
            printf(" ");

        }
       printf("\n");

    }

}
