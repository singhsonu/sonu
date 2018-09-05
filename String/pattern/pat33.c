#include<stdio.h>
int main()
{
   int i,j,n,f,k=0,p;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {     if(i%2==1)
         k=k+1;
        else
        {   k--;
            k=k+i;
        }
       p=k;

        f=1;
        for(j=1;j<=2*n-1;j++)
        {if(j<=2*i-1)
            {if(f)
                {printf("%d",p);
                    if(i%2)
                        k++,p++;
                    else
                    p--;}
                else
                    printf("*");
                    f=1-f;}
            else
                printf(" ");}
   printf("\n");
}


}
