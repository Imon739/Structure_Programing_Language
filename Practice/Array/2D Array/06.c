/*#include <stdio.h>    /// num = 06

int main() {
  int m, n, i, j;

  printf("Enter the number of rows and columns: ");
  scanf("%d %d", &m, &n);

  int A[m][n], B[m][n], C[m][n];

  printf("Enter the elements of matrix A: ");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter the elements of matrix B: ");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  printf("The sum of two matrices is: \n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}*/

/*#include <stdio.h>     /// num = 07

int main() {
  int A[3][3], B[3][3], C[3][3];
  int i, j, k;

  printf("Enter the elements of matrix A: ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter the elements of matrix B: ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  // Multiply the matrices
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      C[i][j] = 0;
      for (k = 0; k < 3; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Print the result
  printf("The product of the matrices is: \n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}*/

#include <stdio.h>

int main() {
  int m, n, i, j, max = INT_MIN, max_i = -1, max_j = -1;

  printf("Enter the dimensions of the matrix: ");
  scanf("%d %d", &m, &n);

  int mat[m][n];
  printf("Enter the elements of the matrix: ");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  // Find the maximum element in the matrix
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (mat[i][j] > max) {
        max = mat[i][j];
        max_i = i;
        max_j = j;
      }
    }
  }

  // Print the maximum element and its index
  printf("Max: %d\nLocation: [%d][%d]\n", max, max_i, max_j);

  return 0;
}



