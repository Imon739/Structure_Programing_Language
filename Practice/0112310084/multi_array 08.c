#include <stdio.h>

int main()
{
  int m, n, i, j, max = 0, max_i = 0, max_j = 0;
  int mat[100][100];

  scanf("%d %d", &m, &n);

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (mat[i][j] > max) {
        max = mat[i][j];
        max_i = i;
        max_j = j;
      }
    }
  }

  printf("Max: %d\n", max);
  printf("Location: [%d][%d]\n", max_i, max_j);

  return 0;
}
