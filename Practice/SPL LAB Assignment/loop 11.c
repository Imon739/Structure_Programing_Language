/*#include<stdio.h>   /// num = 11

int main()
{
    int i, j, n;
    scanf("%d",&n);

        for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf("_");
        }

        // Print asterisks
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>    /// num = 12

int main()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1;i<=(n-1)/2;i++)
    {
        for(j=1;j<=(n+1)/2-i;j++)
        {
            printf("_");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    for(i=1;i<=(n-1)/2;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("_");
        }
        for(j=1;j<=(n-2*i);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

