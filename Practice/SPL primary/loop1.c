/*#include <stdio.h>

int main() {
    /*int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Series up to %dth term:\n", N); //for 1 2 3 4 5

    int n;
    for (n = 1; n <= N; n++) {
        printf("%d ", n);

    return 0;
}*/


#include <stdio.h>

void printSeries(int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("%d, ", i % 2);
    }
}

int main() {
    int N;
    printf("Enter the number of terms: ");
    scanf("%d", &N);
    printf("Series: ");
    printSeries(N);
    return 0;
}

