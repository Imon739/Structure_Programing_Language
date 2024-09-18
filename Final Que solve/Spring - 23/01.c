/*#include <stdio.h>

void input_CT_marks(float ct_marks[], int n) {
    printf("Enter marks for %d class tests:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Class Test %d: ", i + 1);
        scanf("%f", &ct_marks[i]);
    }
}


float take_Highest_CT(float ct_marks[], int n) {
    float highest_mark = ct_marks[0];
    for (int i = 1; i < n; i++) {
        if (ct_marks[i] > highest_mark) {
            highest_mark = ct_marks[i];
        }
    }
    return highest_mark;
}

int main() {
    int n;

    printf("Enter the number of class tests: ");
    scanf("%d", &n);

    float ct_marks[n];

    input_CT_marks(ct_marks, n);


    float highest_mark = take_Highest_CT(ct_marks, n);

    printf("The highest class test mark is: %.2f\n", highest_mark);

    return 0;
}*/



/*#include<stdio.h>
int x = 78, y = 0, z = 156;
int first_function(int p, int q)
{
    int x = ++p;
    return x + z;
}
void second_function(int w, int y)
{
    y *= x;
    y -= w;
    printf("%d %d %d\n", x, y, z);
    x = first_function(y, z);
    printf("%d %d %d\n", x, y, z);
}
void main()
{
    int x = 90;
    y = first_function(x, z);
    printf("%d %d %d\n", x, y, z);
    second_function(y, z);
    printf("%d %d %d\n", x, y, z);
}*/

/*#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100] = "This journey is";
    char str2[100] = "beautiful";
    int j;
    strncpy(str1, str2, 8);
    for(j=3; str1[j] !='\0'; j++)
        str1[j] = str2[strlen(str1)-j];
    strncat(str2, str1, 3);
    printf("String 1:%s\n",str1);
    str2[j-2]='\0';
    printf("String 2: %s\n",str2);
    for(j=5; j>2; j--)
    {
        strrev(str1);
    }
    printf("Final: %s", str1);
}*/

/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a consonant
int isConsonant(char ch) {
    ch = tolower(ch);
    return (ch >= 'b' && ch <= 'z' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u');
}

// Function to change a consonant to the next one
char getNextConsonant(char ch) {
    ch = tolower(ch);
    if (ch == 'z') {
        return 'b'; // Wrap around to 'b' if 'z' is encountered
    } else if (isConsonant(ch)) {
        return ch + 1;
    }
    return ch; // Return unchanged if it's not a consonant
}

int main() {
    char message[1000];

    // Input the message
    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    // Iterate through the message and change consonants
    for (int i = 0; i < strlen(message); i++) {
        if (isConsonant(message[i])) {
            message[i] = getNextConsonant(message[i]);
        }
    }

    // Print the modified message
    printf("Modified message: %s", message);

    return 0;
}*/
























