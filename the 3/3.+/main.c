#include <stdio.h>
int combination(int n, int m)
{
    int i , a=0 , b=0 ;
    while (n!=0)
    {
            for (i=1;i<10;i++)
        {
            if (n>m)
            {
                a=combination(n-1,m-1)+combination(n-1,m);
                if (m==0)
                {
                    b++;
                    n--;
                    m--;
                }
                else;
            }
            else ;
        }
    }
return b ;
}
int main (void)
{
    int x , n , m ;
    printf("enter n and m : ");
    scanf("%d%d",&n,&m);
    x= combination(n , m);
    printf("%d",x);
return 0;
}
