#include <stdio.h>

int main() {
    int number,;
    printf("Enter a number: ");
    scanf("%d", &number);


    int multiplied = multiplyByEight(number);
    printf("Result: %d\n", multiplied);

    return 0;
}

