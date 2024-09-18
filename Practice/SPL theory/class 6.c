#include<stdio.h>
int main()
{
    int i,n,product = 1;
    scanf("%d",&n);
    for (i = 1 ; i <=n ; i = i+1)
    {
        product = product * i;

    }
    printf(" %d ! is %d",n,product);

    return 0;
}
