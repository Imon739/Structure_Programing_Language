#include <stdio.h>

int main() {
    float frameLength, frameWidth, photoLength, photoWidth;
    char option;

    printf("Enter the length of the photo frame: ");
    scanf("%f", &frameLength);

    printf("Enter the width of the photo frame: ");
    scanf("%f", &frameWidth);

    printf("Enter the length of the photo: ");
    scanf("%f", &photoLength);

    printf("Enter the width of the photo: ");
    scanf("%f", &photoWidth);

    printf("Enter the option (A/B/C): ");
    scanf(" %c", &option);

    float frameArea = frameLength * frameWidth;
    float photoArea = photoLength * photoWidth;

    switch (option) {
        case 'A':
            printf("Frame Area: %.2f\n", frameArea);
            break;

        case 'B':
            printf("Photo Area: %.2f\n", photoArea);
            break;

        case 'C':
            printf("Frame Area: %.2f\n", frameArea);
            printf("Photo Area: %.2f\n", photoArea);
            break;

        default:
            printf("Wrong Input\n");
            return 0;
    }

    if (photoArea > frameArea) {
        printf("Too Big\n");
    }

    return 0;
}

