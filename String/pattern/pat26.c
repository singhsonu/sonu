#include<stdio.h>
int main()
{

  int i,j,n,k;

  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      k=1;

  for(j=1;j<=n;j++)
  {
  if(j<=i)

  {      if(j%2==0)
       printf("0");
  else
    printf("1");
       k++;
  }
  else
  printf(" ");
  }
printf("\n");
  }
  }
