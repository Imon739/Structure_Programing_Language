#include <stdio.h>

int main() {
  int n, i, j, sum_first_row = 0, sum_last_row = 0, sum_main_diagonal = 0, sum_secondary_diagonal = 0;
  int matrix[100][100];

  printf("Enter the dimension of the square matrix: ");
  scanf("%d", &n);

  printf("Enter the elements of the matrix: ");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // Calculate the sum of the integers at first row
  for (i = 0; i < n; i++) {
    sum_first_row += matrix[0][i];
  }

  // Calculate the sum of the integers at last row
  for (i = 0; i < n; i++) {
    sum_last_row += matrix[n - 1][i];
  }

  // Calculate the sum of the integers on the main diagonal
  for (i = 0; i < n; i++) {
    sum_main_diagonal += matrix[i][i];
  }

  // Calculate the sum of the integers on the secondary diagonal
  for (i = 0; i < n; i++) {
    sum_secondary_diagonal += matrix[i][n - 1 - i];
  }

  // Print the sum of the integers
  printf("Sum of integers at first row: %d\n", sum_first_row);
  printf("Sum of integers at last row: %d\n", sum_last_row);
  printf("Sum of integers on the main diagonal: %d\n", sum_main_diagonal);
  printf("Sum of integers on the secondary diagonal: %d\n", sum_secondary_diagonal);
  printf("Total sum: %d\n", sum_first_row + sum_last_row + sum_main_diagonal + sum_secondary_diagonal);

  return 0;
}
