#include<conio.h>
int main()
{
    int i,j,k=0,x=1;
    int n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
       x=1;
        i<n+1?k++:k--;


     for(j=1;j<=n;j++)
        {
           if(j>=n+1-k)
           {

               printf("%d",x);
               x++;


          }
           else
            printf(" ");

        }

printf("\n");
}
}
