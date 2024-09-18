/*#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter the number :");
    scanf("%d %d %d", &a, &b, &c);
    float x1, x2;

    x1 =  ( -b + sqrt(( (b*b) - (4*a*c) )) )/ (2*a) ;
    x2 =  ( -b - sqrt(( (b*b) - (4*a*c) )) )/ (2*a) ;

    printf("%.2f %.2f",x1,x2);
    return 0;
}*/


/*#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    // Converting the character to lowercase for easy comparison
    character = tolower(character);

    if ((character >= 'a' && character <= 'z')) {
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
            printf("%c is a vowel.\n", character);
        } else {
            printf("%c is a consonant.\n", character);
        }
    } else {
        printf("The entered character is not a letter.\n");
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
         printf("%d is a leap year.\n", year);

    }else{
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}*/


#include <stdio.h>
#include <math.h>

int main() {
float diagonal, side, area;

    printf("Enter the length of the diagonal: ");
    scanf("%f", &diagonal);

    side = diagonal / sqrt(2);

    area = side * side;

    printf("The area of the square is: %.2f\n", area);

    return 0;
}





