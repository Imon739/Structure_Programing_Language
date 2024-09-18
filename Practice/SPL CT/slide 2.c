/*#include <stdio.h>

int main() {
    // Input values for a, b, and c
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    // Evaluating the equations
    int X = a - b / 3 + c * 2 - 1;
    int Y = a - (b / (3 + c) * 2) - 1;
    int Z = a - ((b / 3) + c * 2) - 1;

    // Output the results
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);
    printf("Z = %d\n", Z);

    return 0;
}*/
#include <stdio.h>

int main() {
    int a, b, c;


    // Input values
    printf("Enter the values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Statement 1: a+b≤80
    int statement1 = (a + b <= 80);

    // Statement 2: !(a+c)
    int statement2 = !(a + c);

    // Statement 3: a != 0
    int statement3 = (a != 0);

    // Output results
    printf("Statement 1: %d\n", statement1);
    printf("Statement 2: %d\n", statement2);
    printf("Statement 3: %d\n", statement3);

    return 0;
}

