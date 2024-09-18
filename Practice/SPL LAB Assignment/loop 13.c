#include <stdio.h>     /// num = 13

int main()
{
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (j = 1; j <= (2 * (n - i)-1); j++)
        {
            printf("_");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1; i<=1; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",j);
        }
        for(j=n-1; j>=1; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}


/*#include<stdio.h>   /// num = 14
int main()
{
    int n, i, j;
    scanf("%d",&n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i % 2 != 0) {
                printf("*");
            } else {
                if (j == 1 || j == n ) {
                    printf("*");
                } else {
                    printf("_");
                }
            }
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>   /// num = 0

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("Z");
    }
    printf("\n");

    for(i=1;i<=n-2;i++){
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
