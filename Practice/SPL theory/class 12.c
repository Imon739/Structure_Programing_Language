/*#include<stdio.h>
int main()
{
    int i, j;
    int A[3][3];

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i, j;
    int a[3][3] = {1, 2, 3, 4, 5};

    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}*/

#include<stdio.h>

int main()
{
    int n, i, j,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        printf("*");
        for(k=1;k<=2*i-1;k++){
            printf(" ");
        }
        if( i!=0){
            printf("*");
        }


         printf("\n");
         }
       return 0;
}


