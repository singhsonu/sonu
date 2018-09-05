#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    int p=n;
    for(i=1;i<=n;i++)
    {

         k=p;
    for(j=1;j<=n;j++)
    {
          if(j<=n+1-i)
    {
     printf("%d",k);
          if(j==p)
    printf("0");
           k--;
    }

    else
    printf(" ");
    }
    if(j==k)
    printf("0");
    p--;
    printf("\n");

    }
}
