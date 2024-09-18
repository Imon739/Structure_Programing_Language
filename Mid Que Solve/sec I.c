/*#include <stdio.h>         ///  num = 01

int main() {
    int matrix[3][3];
    int i, j, sum = 0;

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the lower triangular matrix
    for (i = 0; i < 3; i++) {
          for (j = 0; j < 3; j++) {
              if((i > j)){
            sum += matrix[i][j];
              }
        }
    }

    // Output the sum
    printf("Sum = %d\n", sum);

    return 0;
}*/



/*
#include <stdio.h>            /// num = 03

int main() {
  int a, b, i, j, sum ;
  printf("Enter lower limit: ");
  scanf("%d", &a);
  printf("Enter upper limit: ");
  scanf("%d", &b);

  for (i = a; i <= b; i++) {
        sum = 0;
    for ( j = 1; j < i; j++) {
      if (i % j == 0) {
        sum = sum + j;
      }
    }
    if (sum == i) {
      printf("%d ", i);
    }
  }

  return 0;
}*/


/*
#include <stdio.h>                ///    num = 02

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Normalize k to handle cases where k is greater than n
    k = k % n;

    if (k == 0 || k == n) {
        printf("Array after cyclically left-rotate by %d position(s): ", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        int temp[k];
        for (int i = 0; i < k; i++) {
            temp[i] = arr[i];
        }

        for (int i = k; i < n; i++) {
            arr[i - k] = arr[i];
        }

        for (int i = 0; i < k; i++) {
            arr[n - k + i] = temp[i];
        }

        printf("Array after cyclically left-rotate by %d position(s): ", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}*/


