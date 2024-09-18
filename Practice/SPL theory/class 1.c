#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("I");
    }
    printf("\n");

    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-4;j++)
        {
            printf(" ");
        }
        printf("I\n");
    }

    for(i=1;i<=n;i++)
    {
        printf("I");
    }
    printf("\n");

    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-2;j++)

        printf("I\n");
    }
    return 0;
}
