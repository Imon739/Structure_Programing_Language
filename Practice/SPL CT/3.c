/*#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, side, square_area, circle_area, shaded_area;

    // Input the radius of the inner circle
    printf("Enter the radius of the inner circle: ");
    scanf("%lf", &radius);

    // Calculate the side length of the square enclosing the circle
    side = 2 * radius;

    // Calculate the area of the square
    square_area = side * side;

    // Calculate the area of the circle
    circle_area = PI * radius * radius;

    // Calculate the shaded area
    shaded_area = square_area - circle_area;

    // Print the shaded area
    printf("The shaded area is: %.2lf\n", shaded_area);

    return 0;
}*/

#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 == 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Invalid Operation: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid Operation.\n");
            break;
    }

    return 0;
}


