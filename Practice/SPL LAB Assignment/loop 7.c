/*#include<stdio.h> /// num = 10
int main()
{
    int n, i, j;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("_");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>  /// num = 7
int main()
{
    int i, n, j;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>  /// num = 8

int main()
{
    int i, j, n;
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


#include<stdio.h>  /// num = 9

int main()
{
    int i, j, n;
    scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;

}
