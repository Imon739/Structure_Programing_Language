#include <stdio.h>   /// num = 01
#include <math.h>

int main() {
  int n, i, j, sqrt_n;

  printf("Enter the number of integers: ");
  scanf("%d", &n);

  sqrt_n = sqrt(n);

  int arr[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }


  for (i = 0; i < sqrt_n; i++) {
    for (j = 0; j < sqrt_n; j++) {
      printf("%d ", arr[i * sqrt_n + j]);
    }
    printf("\n");
  }

  return 0;
}

/*#include <stdio.h>      /// num = 02

int main() {
    int m, n;
    printf("Enter the dimensions of the array (m n): ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Row-wise: ");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");

    printf("Column-wise: ");
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>   /// num = 03

int main() {
  int a[3][3], i, j, determinant;

  printf("Enter the elements of the matrix: ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  determinant = a[0][0] * ((a[1][1] * a[2][2]) - (a[2][1] * a[1][2])) -
                  a[0][1] * (a[1][0] * a[2][2] - a[2][0] * a[1][2]) +
                  a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

  printf("The determinant of the matrix is: %d\n", determinant);

  return 0;
}*/

/*#include <stdio.h>   ///num = 04

int main() {
  int n, i, j, major_diagonal[n], minor_diagonal[n];

  printf("Enter the size of the square matrix: ");
  scanf("%d", &n);

  int matrix[n][n];
  printf("Enter the elements of the matrix: ");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Initialize the major and minor diagonals.
  for (i = 0; i < n; i++) {
    major_diagonal[i] = matrix[i][i];
    minor_diagonal[i] = matrix[i][n - i ];
  }

  // Print the major diagonal.
  printf("Major diagonal: ");
  for (i = 0; i < n; i++) {
    printf("%d ", major_diagonal[i]);
  }
  printf("\n");

  // Print the minor diagonal.
  printf("Minor diagonal: ");
  for (i = 0; i < n; i++) {
    printf("%d ", minor_diagonal[i]);
  }
  printf("\n");

  return 0;
}*/
/*#include <stdio.h>    /// num = 05

int main() {
  int n, i, j;

  printf("Enter the size of the identity matrix: ");
  scanf("%d", &n);

  int arr[n][n];
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == j) {
        arr[i][j] = 1;
      } else {
        arr[i][j] = 0;
      }
    }
  }

  printf("The identity matrix is: \n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}*/

