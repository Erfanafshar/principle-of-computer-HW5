#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int far()
{
    double x;
    time_t t = time(NULL);
    srand(t);
    int ir = rand();
    double f= (ir + 1) / (RAND_MAX + 2.0);
    x=f*1000;
return x;
}
int main(void)
{
    int i , y , z;
    double t ;
    t=ceil(far());
    for (i=1;i<100;i++)
    {
        printf("enter your number : \n");
        scanf ("%d",&y);
        if (t==y)
        {
            printf("you win\n");
            i=110;
        }
        else ;
        if (t<y)
        {
            printf("your number is large\n");
        }
        else ;
        if (t>y)
            printf("your number is small\n");
        else ;
    }
    for (i=1;i<100;i++)
    {
        printf("%f\n",t);
        printf("if my number is large enter 0 if my number is small enter 1 if my number is true print 2\n");
        scanf("%d",&z);
        if (z==0)
        {
            t=ceil((t*t)/1000);
        }
        else ;
        if (z==1)
        {
            t=ceil(1000-((t*t)/1000));
        }
        else ;
        if (z==2)
        {
            printf("i win\n");
            i=109;
        }
    }
return 0 ;
}







