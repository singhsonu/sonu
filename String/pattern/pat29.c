

#include<stdio.h>
int main()
{

  int i,j,n;
  char k=64;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
 k=k+2*(i-1)+1;

    for(j=1;j<=n;j++)
    {


        if(j>=n+1-i)
        {

          printf("%c",k--);


        }

        else
            printf(" ");


    }

      printf("\n");
  }




}
