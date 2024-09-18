#include<stdio.h>
int main()
{
    int a = 17%7*5;
 float b = (int)(17.0/5);
 float c= (int)17/5.0;
 int d = (a>b) && c;
printf("%d\n",a);
printf("%f\n",b);
printf("%f\n",c);
printf("%d\n",d);
}


#include <stdio.h>              /// 03 == b
int main()
{
    int num, sum = 0, count = 0;
    scanf("%d", &num);

    if (num == 0) {
        printf("No positive numbers entered.\n");
        return 0;
    }

    for (;;) {
        if (num > 0) {
            sum = sum + num;
            count++;
        }

        printf("Enter a number (0 to exit): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
    }

    float average = (float)sum / count;
    printf("Average: %.2f\n", average);

    return 0;
}

#include<stdio.h>           /// 01 == a
int main()
{
    int num1 = 5;
    float num2;
    char chr = 'q';
    scanf("%f", &num2);
    num1 = (int)num2 % chr;
    printf("Result is = %f ", num1);
}*/
