#include <stdio.h>   /// num = 18

int main()
{
    int i, j, n;
    scanf("%d",&n);

        for (i = 1; i <= n; i++) {
        for (j = 1; j <= i-1; j++){
            printf(" ");
        }

            printf("%d",i);



         printf("\n");
    }

    return 0;
}
