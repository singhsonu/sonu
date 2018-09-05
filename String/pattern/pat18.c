#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    for(j=1;j<=2*n;j++)
    {
    if(j==i||j>=n&&j<=2*n)
    {
    printf("*");
    }
    else
    {
    printf(" ");
    }
    }
    break;
    }
    printf("\n");

    for(k=1;k<=n-2;k++)
    {
    for(j=1;j<=2*n;j++)
    {
    if(j==i||j==n)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
    }
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=2*n;j++)
    {
    printf("*");
    }
    break;
    }
    printf("\n");
    for(k=1;k<=n-2;k++)
    {
    for(j=1;j<=2*n;j++)
    {
    if(j==n||j==2*n)
    printf("*");
    else
    printf(" ");
    }
    printf("\n");
    }
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=2*n;j++)
    {
        if(j>=i&&j<=n||j==2*n)
        printf("*");
        else
            printf(" ");
    }
    break;
   }
}
