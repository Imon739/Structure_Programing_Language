/*#include <stdio.h>

int multiplyByEight(int num) {
    return (num << 3);  // Left shift the number by 3 (equivalent to multiplying by 8)
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = multiplyByEight(number);

    printf("Result: %d\n", result);

    return 0;
}

#include <stdio.h>

int divideByEight(int num) {
    return (num >> 3);  // Right shift the number by 3 (equivalent to dividing by 8)
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = divideByEight(number);

    printf("Result: %d\n", result);

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the lengths of the triangle sides:\n");
    printf("Side 1: ");
    scanf("%d", &a);
    printf("Side 2: ");
    scanf("%d", &b);
    printf("Side 3: ");
    scanf("%d", &c);

    int perimeter = a + b + c;
    printf("Perimeter of the triangle: %d\n", perimeter);

    if (a == b && b == c) {
        printf("The triangle is Equilateral.\n");
    } else if (a == b || b == c || c == a) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}*/

#include <stdio.h>

#define PI 3.14159

int main() {
    char shape;
    float length, width, radius, height, base, area;

    printf("Select a shape:\n");
    printf("a. Square\n");
    printf("b. Rectangle\n");
    printf("c. Circle\n");
    printf("d. Triangle\n");
    printf("Enter your choice: ");
    scanf("%c", &shape);

    switch (shape) {
        case 'a':
            printf("Enter the length of the square: ");
            scanf("%f", &length);
            area = length * length;
            printf("The area of the square is: %.2f\n", area);
            break;

        case 'b':
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("The area of the rectangle is: %.2f\n", area);
            break;

        case 'c':
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("The area of the circle is: %.2f\n", area);
            break;

        case 'd':
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %.2f\n", area);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


