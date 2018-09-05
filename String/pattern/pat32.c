#include<stdio.h>
int main()
{
   int i,j,k,n,p;
   char s;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {    k=1;
        s='A';
        p=1;
       for(j=1;j<=2*n-1;j++)
       {
           if(j>=n+1-i&&j<=n-1+i)
           {
               if(k)
                  {
                    if(i%2==1)
                        printf("%d",p++);
                    else
                        printf("%c",s++);
                 }

                 else
                 printf(" ");
                 k=1-k;
            }
            else
            printf(" ");

            }
           printf("\n");
   }




}
