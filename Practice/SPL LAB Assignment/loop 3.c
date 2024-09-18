/*#include <stdio.h>  /// num = 6

void main() {
  int n, i, j;

  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}*/

/*#include<stdio.h> /// num = 3

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=2*i-1; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>  /// num = 4

int main()
{
    int n, i, j;
    scanf("%d", &n);

     for (i= 1; i <= n; i++) {
    for (j = 1; j <= n-i; j++) {
            printf("_",j);
  }
  for(j=1;j<=i;j++){
    printf("%d",i);
  }

  printf("\n");
     }
  return 0;
}

/*#include<stdio.h>   ///num = 5

int main()
{
    int i, j, n;
    scanf("%d", &n);

    for(i=n;i>=1;i--){
        for(j=n;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}*/
