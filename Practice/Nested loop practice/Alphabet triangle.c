#include<stdio.h>
int main()
{
    int i, j, n;
    char x;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        x='A';
        for(j=1;j<=n-i+1;j++){
            printf("%c ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
