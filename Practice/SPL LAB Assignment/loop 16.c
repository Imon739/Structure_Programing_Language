/*#include <stdio.h>   /// num = 16

int main() {
  int n, i, j;
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j || i + j == n - 1 ) {
        printf("*");
      } else {
        printf("_");
      }
    }
    printf("\n");
  }

  return 0;
}*/

#include <stdio.h>   /// num = 18

int main()
{
    int i, j, n;
    scanf("%d",&n);

        for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j == 1 || j == n || i == (n+1) / 2){
                printf("H");
            }else{
                printf(" ");
            }
        }
         printf("\n");
    }

    return 0;
}

