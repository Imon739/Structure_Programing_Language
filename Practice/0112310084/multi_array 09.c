#include <stdio.h>

int main() {
  int n, i, j, sum_first_row = 0, sum_last_row = 0, sum_main_diagonal = 0, sum_secondary_diagonal = 0;
  int matrix[100][100];

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }


  for (i = 0; i < n; i++) {
    sum_first_row = sum_first_row + matrix[0][i];
  }

  for (i = 0; i < n; i++) {
    sum_last_row = sum_last_row + matrix[n - 1][i];
  }

  for (i = 1; i < n-2; i++) {
    sum_main_diagonal = sum_main_diagonal + matrix[i][i];
  }


  for (i = 1; i < n-2; i++) {
    sum_secondary_diagonal = sum_secondary_diagonal+ matrix[i][n - 1 - i];
  }

  printf("Total sum: %d\n", sum_first_row + sum_last_row + sum_main_diagonal + sum_secondary_diagonal);

  return 0;
}

