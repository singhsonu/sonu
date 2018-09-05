#include<stdio.h>
int main()
{

    int i,j,k=0;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {
         if(n%2==0)
        {
            if(i<=n/2)
                k++;
            if(i>n/2+1)
                k--;

        }
         else
         i<=n/2+1?k++:k--;

     for(j=1;j<=n/2+1;j++)
     {
         if(j<=k)
         {
              printf(" %d",k);

          }
         else
         {
           printf(" ");

         }
     }
     printf("\n");

    }

return(0);

}
