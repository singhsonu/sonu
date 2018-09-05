#include<stdio.h>
int main()
{

  int i,j,n;
  char k='A';
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  k='A';
  for(j=1;j<=2*n;j++)
  {
  if(j>=n-i&&j<=n-1+i)
  {
  if(j==n)
  k='1';
  printf("%c",k);
  k++;
  }
  else
  printf(" ");
  }
printf("\n");
  }
  }
