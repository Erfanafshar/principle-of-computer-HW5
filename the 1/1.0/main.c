#include <stdio.h>
int power (int a , int b)
{
    int res=1 , i ;
    for(i=0;i<=b;i++)
    {
        if (i==0)
        {
            res=1;
        }
        else
        {
            res*=a;
        }
    }
    return res;
}
int dig_index(int n ,int m ,int dir )
{
    int a , i=0 , b , c=0 , d ;
    b=n;
    if(dir==1)
    {
        while(n!=0)
        {
            n=n/10;
            i++;
        }
        n=b;
        d=i;
        for(i=1;i<=d;i++)
        {
            a=n%10;
            if (a==m)
            {
                return i ;
                break ;
            }
            else
            {
                n=(n-a)/10;
            }
        }
        if (i==d+1)
        {
            i=0;
            return i;
        }
        else ;
    }
    if(dir==-1)
    {
        while(n!=0)
        {
            n=n/10;
            i++;
        }
        n=b;
        d=i;
        for(;i>-1;i--)
        {
            if (n==0)
            {
                break ;
            }
            else ;
            a=n/power(10,i-1);
            if (a==m)
            {
                break;
            }
            else
            {
                n=n%power(10,i-1);
            }
        }
        if(i==0)
        {
            i=0;
            return i ;
        }
        else
        {
            i=d+1-i;
            return i ;
        }

    }
}
int sym(int n)
{
    int m , a ;
    for(m=0;m<10;m++)
    {
        if (dig_index(n,m,1)!=dig_index(n,m,-1))
        {
            return 0;
            break ;
        }
        else ;
    }
    if (m==10)
    {
        return 1;
    }
    else ;
}
int main (void)
{
    int n , z;
    printf("enter n : ");
    scanf("%d",&n);
    z=sym(n);
    if (z==1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0 ;
}
