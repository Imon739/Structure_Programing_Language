/*#include<stdio.h>
#include<math.h>

int main() {
    int x;
    scanf("%d", &x); // User will enter 40 as input
    int y = (x * 5 % 3) % 10 + 9;
    int z = (91 / 13 + (23.0 % 10)) * (34 + (56.0 / 9)) - sqrt(50);
    float w = ((56 < 89 && 67 > 12) * 6) % 23 + (10 > (9 - (6 < 1 || 89 < 100)) * float)++x / 6;

    if (y > z + w) {
        printf("Yes!!\n");
        y = y - 100;
    } else {
        printf("No!!!\n");
        z = z + y++ + 100;
    }

    x = x + w;
    printf("The result is: %d %d %d %f", x, y, z, w);

    return 0
}*/

#include <stdio.h>
#include <math.h>

int main() {
    double radius, side1, side2, side3;
    printf("Enter the radius of the ball: ");
    scanf("%lf", &radius);
    printf("Enter the length of side 1 of the box: ");
    scanf("%lf", &side1);
    printf("Enter the length of side 2 of the box: ");
    scanf("%lf", &side2);
    printf("Enter the length of side 3 of the box: ");
    scanf("%lf", &side3);

    double diagonal = sqrt(side1 * side1 + side2 * side2 + side3 * side3);

    if (radius * 2 <= diagonal) {
        printf("Comfortable!\n");
    } else if (radius * 2 == diagonal) {
        printf("Just!\n");
    } else {
        printf("No!\n");
    }

    return 0;
}

