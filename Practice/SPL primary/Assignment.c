/*#include <stdio.h>    /// num. 1

int main()
{
    int n, k, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Multiplication table of %d up to %d:\n", n, k);
    for (i = 1; i <= k; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);


    x1 = (-b + sqrt((b*b) - 4*a*c))/(2*a);
    x2 = (-b - sqrt((b*b) - 4*a*c))/(2*a);

    printf("Root 1 =%lf",x1);
    printf("Root 2 =%lf",x2);

    return 0;
}

