#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j) == (n+3)/2 ||  j == (n+1)/2 || i == (n+1)/2 || j == (n-1)/2+i || i == (n-1)/2+j || (i+j) == (3*n+1)/2){
                printf("$");
            }else{
            printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
