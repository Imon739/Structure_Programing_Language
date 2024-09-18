/*#include<stdio.h>   ///diamond shape.

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1; i<(n+1)/2; i++)
    {
        for(j=1; j<=(n+1)/2-i; j++)
        {
            printf("_");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1; i<=(n/2); i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("_");
        }
        for(j=1; j<=(n-2*i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/



/*#include<stdio.h>    ///x^3 function.

int main()
{
    int n,i,sum=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i*i*i;
    }
    printf("Sum : %d",sum);
    return 0;
}*/


/*#include<stdio.h>

int main()
{
    int a,b,n1,n2,n3,count = 0;
    scanf("%d %d", &a, &b);

    for(n1=a;n1<=b;n1++)
    {
        for(n2=n1+1;n2<=b;n2++)
        {
            for(n3=n2+1;n3<=b;n3++)
            {
                if(n1*n1+n2*n2==n3*n3)
                {
                    printf("(%d %d %d)\n",n1,n2,n3);
                    count++;
                }
            }
        }
    }

    printf("Pythagorean Triplets Count: %d\n",count);
    return 0;
}*/



/*#include<stdio.h>

int main()
{
    double x,sinx=0,sign=1, pow=1, fact=1;
    int i;
    scanf("%lf",&x);
    for(i=1;i<=7;i+=2)
    {
        pow= pow * x;
        sinx = sinx + (sign*pow/fact);
        sign = -sign;
        pow = pow *x;
        fact = fact * (i+1) * (i+2);
    }
    printf("Sin%f = %f",x,sinx);
    return 0;
}*/



/*#include<stdio.h>        /// Z shape

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("Z");
    }
    printf("\n");

    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
            printf(" ");
        }
        printf("Z\n");
    }

    for(i=1;i<=n;i++)
    {
        printf("Z");
    }
    printf("\n");
    return 0;
}*/
