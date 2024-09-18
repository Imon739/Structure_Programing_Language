#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    /*for(i=1;i<=n;i++)
    {
        printf("I");
    }
    printf("\n");

    for(i=1;i<=n-2;i++)
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
    printf("\n");*/




    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
            printf("M\n");
        }

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
        printf("M");
    }
    printf("\n");



    for(i=1;i<=n-1;i++)
    {
        printf("O");
    }
    printf("\n");
    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n-1-i;j++)
        {
            printf("O\n");
        }

    }
    printf("\n");


    for(i=1;i<=n-2;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            printf(" ");
        }
        printf("O\n");
    }

    for(i=1;i<=n-1;i++)
    {
        printf("O");
    }
    printf("\n");


    return 0;
}

