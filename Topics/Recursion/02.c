/*#include<stdio.h>

int GCD(int x, int y)
{
    if( y == 0)
        return x;
    return GCD(y, x%y);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int result;

    if(a > b){
       result = GCD(a,b);
    }else{
       result = GCD(b,a);
    }
    printf("GCD is %d",result);
}*/

/*#include<stdio.h>

int countdigit(int n)
{
    if(n == 0)
        return 0;
    return 1 + countdigit(n/10);
}
int main()
{
    int a;
    scanf("%d",&a);

    int result = countdigit(a);
    printf("Answer is %d",result);
}*/
/*#include<stdio.h>

int sumdigit(int n)
{
    if(n == 0)
        return 0;
    return n%10 + sumdigit(n/10);
}
int main()
{
    int a;
    scanf("%d",&a);

    int result = sumdigit(a);
    printf("Answer is %d",result);
}*/

/*#include<stdio.h>

int limit(int x,int y)
{
    if(y < x)
        return;
    limit(x,y-1);

    printf("%d\n",y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    limit(a,b);
}*/












































