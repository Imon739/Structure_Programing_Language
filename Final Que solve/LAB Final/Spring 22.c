/*#include <stdio.h>      matrix

#define MAX_SIZE 100

int isUpperTriangular(int mat[MAX_SIZE][MAX_SIZE], int n);
void printMatrix(int mat[MAX_SIZE][MAX_SIZE], int n);

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isUpperTriangularMatrix = isUpperTriangular(matrix, n);

    printf("Matrix:\n");
    printMatrix(matrix, n);

    if (isUpperTriangularMatrix) {
        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= matrix[i][i];
        }
        printf("The matrix is an upper triangular matrix.\n");
        printf("Product of the main diagonal elements: %d\n", product);
    } else {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][i];
        }
        printf("The matrix is not an upper triangular matrix.\n");
        printf("Sum of the main diagonal elements: %d\n", sum);
    }

    return 0;
}

int isUpperTriangular(int mat[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (mat[i][j] != 0) {
                return 0; // Not an upper triangular matrix
            }
        }
    }
    return 1; // Upper triangular matrix
}

void printMatrix(int mat[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
*/


