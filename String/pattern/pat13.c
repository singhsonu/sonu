
#include<stdio.h>
int main()
{
    int i,j,k=0,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)

        {     if(i<=n)
              {
                   i<=n?k++:k--;
            for(j=1;j<=n;j++)
           {
           if(j<=k)
           {
            printf("%d",i+2);
           }
          else
           printf(" ");

           }
              }
              else
              {
                   i<=n?k++:k--;
            for(j=1;j<=n;j++)
           {
           if(j<=k)
           {
            printf("%d",k+2);
           }
          else
           printf(" ");

           }
              }


    printf("\n");




    }


}
