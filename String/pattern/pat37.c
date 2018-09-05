#include<stdio.h>
int main()
{
    int i,j,p,k=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    p=k;
    for(j=1;j<=i;j++)
    {
    printf("%d",p);
    p=p+(n-j);
    }
    printf("\n");
    k++;
    }
}
