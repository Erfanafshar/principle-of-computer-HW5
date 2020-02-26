#include <stdio.h>
int power(int a , int b)
{
    int c=1 ,i  ;
    if (b==0)
    {
        return c;
    }
    else
    {
         for(i=1;i<=b;i++)
         {
             c*=a;
         }
         return c ;
    }
}
int max_factor(int n)
{
    int i , j ;
    i=n;
    for (;i>0;i--)
    {
        if(n%i==0)
        {
            for (j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    break;
                }
                else ;
            }
            if (i==j)
            {
                return i;
            }
            else ;
        }
        else ;
    }
}
all_factors(int n)
{
    int x[10];
    int y[10];
    int j=0 , i=0 , l , a;
    while (n!=0)
    {
        l=max_factor(n);
        while (a!=0)
        {
            a=n%max_factor(n);
            n=n/max_factor(n);
            i++;
        }
    n=n/power(l,i-1);
    x[j]=l;
    y[j]=i-1;
    j++;
    }

}
int main (void)
{
    /*int n , z ;
    printf("enter n : ");
    scanf("%d",&n);
    z=max_factor(n);
    printf("%d",z);*/
    int i ;
    for(i=0;i<100;i++)
    {
        if(x[i]*y[i]!=0)
        {
            printf("%d^%d",x[i],y[i])
        }
    }
    return 0 ;
}
