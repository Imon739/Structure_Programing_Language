/*#include<stdio.h>
typedef struct{
    char name[20];
    char id[10];
    float cg;
}students;
int main()
{
    int n;
    float max=0;
    scanf("%d",&n);
    students res[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        gets(res[i].name);
        gets(res[i].id);
        scanf("%f",&res[i].cg);
        if(max<res[i].cg)
        max=res[i].cg;
    }
    for(int i=0;i<n;i++){
        if(max==res[i].cg){
            puts(res[i].name);
            puts(res[i].id);
            printf("%.1f\n",res[i].cg);
        }
    }
    return 0;
}
*/

#include <stdio.h>
#include <stdbool.h>

// Function to convert a number to base 6 recursively
int convBase(int num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 6) + 10 * convBase(num / 6);
    }
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to count prime numbers in a range [a, b]
int primeChecker(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert the number to base 6
    int base6Num = convBase(num);

    // Calculate the sum of digits of the base 6 number
    int sumOfDigits = 0;
    int temp = base6Num;
    while (temp != 0) {
        sumOfDigits += temp % 10;
        temp /= 10;
    }

    // Calculate the sum of the first and last digit of the given number
    int firstDigit = num % 10;
    int lastDigit = 0;
    while (num > 0) {
        lastDigit = num % 10;
        num /= 10;
    }
    int sumOfFirstAndLastDigit = firstDigit + lastDigit;

    // Check if the conditions for the Mega Modric reward are met
    int primeCount = primeChecker(0, sumOfFirstAndLastDigit);
    if ((sumOfDigits % 5 == 0) || (primeCount > 4)) {
        printf("YES, you will receive the Mega Modric reward!\n");
    } else {
        printf("NO, you will not receive the Mega Modric reward.\n");
    }

    return 0;
}






















