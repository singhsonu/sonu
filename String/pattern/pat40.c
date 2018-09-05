#include<stdio.h>
int main()
{
    int i,j,k=1,n,p;
    scanf("%d",&n);
    for(i=1;i<=n+2;i++)
    {
    p=1;
    for(j=1;j<=4*n-1;j++)
    {
    if(j>=i&&j<=2*(n+2)-k)
    {
        if(p==1)
        printf("%d",k++);
      else
      printf("*");
      p=1-p;

    }
    else
    {
    printf(" ");
    }


        }

       printf("\n");


    }







}
