/*#include <stdio.h>                /// num = 01

int is_prime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int digit_sum(unsigned int x) {
    if (x == 0) {
        return 0;
    }
    return x % 10 + digit_sum(x / 10);
}

int is_superprime(int x) {
    if (is_prime(x)) {
        int sum = digit_sum(x);
        return is_prime(sum);
    }
    return 0;
}
int main() {
    int a, b;
    printf("Enter the range (a and b): ");
    scanf("%d %d", &a, &b);

    printf("Superprime numbers in the range from %d to %d are:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (is_superprime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}*/



#include <stdio.h>
#include <string.h>

struct program {
    char name[60];
    int total_memory;
    int used_memory;
};

int all_caps(char *input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (!(input[i] >= 'A' && input[i] <= 'Z')) {
            return 0;
        }
    }
    return 1; //
}

int main() {
    int N;
    printf("Enter the number of programs: ");
    scanf("%d", &N);

    struct program programs[N];

    int virusCount = 0; // Count of virus programs

    for (int i = 0; i < N; i++) {
        scanf("%s", programs[i].name);
        scanf("%d", &programs[i].total_memory);
        scanf("%d", &programs[i].used_memory);

        if (programs[i].used_memory >= programs[i].total_memory && all_caps(programs[i].name)) {
            virusCount++;
        }
    }

    printf("\nViruses detected on the server:\n");
    for (int i = 0; i < N; i++) {
        if (programs[i].used_memory >= programs[i].total_memory && all_caps(programs[i].name)) {
            printf("Program Name: %s\n", programs[i].name);
        }
    }

    printf("\nTotal virus programs detected: %d\n", virusCount);

    return 0;
}







