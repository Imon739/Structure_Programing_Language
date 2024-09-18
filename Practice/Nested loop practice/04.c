/*#include<stdio.h>             /// Shape of Y

int main()
{
    int i, j, n;
    scanf("%d", &n);

    for(i=1;i<=(n+1)/2;i++){
        for(j=1;j<=n;j++){
            if(i == j || (i+j) == (n+1)){
                printf("*");
            }else{
            printf(" ");
            }
        }
        printf("\n");
    }
    for(i=(n-1);i<=n;i++){
        for(j=1;j<=(n-1)/2;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    return 0;
}*/

#include<stdio.h>    /// Shape of T

int main()
{
    int i, j, n;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
            printf("*");
        }
    printf("\n");
     for(i=2;i<=n;i++){
        for(j=1;j<=(n-1)/2;j++){
            printf(" ");

        }
        printf("*");
        printf("\n");
     }
    return 0;
}
