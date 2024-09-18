/*#include <stdio.h>   ///   01

int main() {
  int n, i;
  int arr[100];


  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (i = n - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }

  return 0;
}*/

/*#include<stdio.h>        ///   02
int main()
{
    int i, n, sum = 0;
    int arr[10];
    scanf("%d",&n);

    for(i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        sum = sum + arr[i];

    }
    printf("%d",sum);

       return 0;
}*/


/*#include <stdio.h>        ///    03

int main() {
  int n, i, sum = 0;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      sum = sum + arr[i];
    }
  }

  printf("The sum of all even numbers is: %d\n", sum);

  return 0;
}*/

#include <stdio.h>

int main() {
  int n, i, max, min, index_max, index_min;

  scanf("%d", &n);

  int arr[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  max = arr[0];
  min = arr[0];
  index_max = 0;
  index_min = 0;

  for (i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      index_max = i;
    } else if (arr[i] < min) {
      min = arr[i];
      index_min = i;
    }
  }

  printf("Max = %d, index = %d\n", max, index_max);
  printf("Min = %d, index = %d\n", min, index_min);

  return 0;
}

