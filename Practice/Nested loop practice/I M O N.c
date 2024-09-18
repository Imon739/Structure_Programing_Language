#include<stdio.h>
#include <unistd.h>

int main() {
    int i, j, n;

    scanf("%d", &n);

    for ( i = 1; i <= n; i++) {
         for(j=1;j<=(n-1)/2;j++){
            printf("  ");
        }
        printf("* \n");
        fflush(stdout);
        usleep(500000);

    }
      printf("\n\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || j == n || (i == j && j <= (n +1) / 2) || (i + j == n + 1 && j >= (n+1) / 2)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
        fflush(stdout);
        usleep(500000);
    }

    printf("\n\n");

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n){
                printf("* ");
            }else{
                printf("  ");
            }

        }
        printf("\n");
          fflush(stdout);
        usleep(500000);
    }

    printf("\n\n");


     for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || j == n  || i == j){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
        fflush(stdout);
        usleep(500000);
    }

    return 0;
}
