/*#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}*/


#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the second largest number
    int secondLargest;

    if (num1 > num2 && num1 > num3) {
        if (num2 > num3) {
            secondLargest = num2;
        } else {
            secondLargest = num3;
        }
    } else if (num2 > num1 && num2 > num3) {
        if (num1 > num3) {
            secondLargest = num1;
        } else {
            secondLargest = num3;
        }
    } else {
        if (num1 > num2) {
            secondLargest = num1;
        } else {
            secondLargest = num2;
        }
    }

    // Print the second largest number
    printf("The second largest number is: %d\n", secondLargest);

    return 0;
}

