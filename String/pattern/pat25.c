#include<stdio.h>
int main()
{

  int i,j,n,k;

  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  k=49;
  for(j=1;j<=2*n;j++)
  {
  if(j>=n+1-i&&j<=n-1+i)
  {
       printf("%c",k);
       k++;
  if(j==n)
  k=65;




  }
  else
  printf(" ");
  }
printf("\n");
  }
  }
