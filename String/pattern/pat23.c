#include<stdio.h>
int main()
{

  int i,j,n;
  char k='A';
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    k='A';

    for(j=1;j<=2*n-1;j++)
    {

        if(j>=n+1-i&&j<=n-1+i)
        {

          printf("%c",k);
           j<n?k++:k--;

        }

        else
            printf(" ");


    }

      printf("\n");
  }




}
