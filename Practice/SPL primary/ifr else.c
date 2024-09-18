/*#include <stdio.h>

void printDigitInEnglish(int digit) {
    switch (digit) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid input\n");
    }
}

int main() {
    int digit;

    printf("Enter a single-digit integer: ");
    scanf("%d", &digit);

    if (digit >= 0 && digit <= 9) {
        printDigitInEnglish(digit);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}*/


#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the three angles of the triangle:\n");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    if (angle1 <= 0 || angle1 >= 180 || angle2 <= 0 || angle2 >= 180 || angle3 <= 0 || angle3 >= 180) {
        printf("Invalid angle values. Angles should be greater than 0 and less than 180.\n");
    }

    else if (angle1 + angle2 + angle3 == 180) {
        printf("Valid triangle.\n");
    } else {
        printf("Invalid triangle.\n");
    }

    return 0;
}


