/*#include <stdio.h>          ///   01 == c
int main()
{
    int b;
    scanf("%d", &b);
    if(b >= 10){
        printf("SPL\n");
        b--;
    }
    if(b < 10){
        printf("Spring\n");
        b--;
    }
    else if((b>=3) || (b<10))
        printf("2023\n");
    else if(b>=3 && b<10)
        printf("Happy Coding!");
    else
        printf("Huh!");
        return 0;
}*/
/*
#include<stdio.h>       ///  02 == a
int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    if(n>a)
    {
        if(n-a>5)
        {
            printf("Difference is greater than 5 \n");
        }
        else
        {
            printf("Difference is less than or equal to 5 \n");
        }
    }
    else
    {
        printf("Please give a larger value of n \n");
    }
    return 0;
}*/

/*#include<stdio.h>                 /// 02 == a

int main()
{
    int n, a;
    scanf("%d %d", &n, &a);

    switch (n > a) {
        case 1:
            if (n - a > 5) {
                printf("Difference is greater than 5 \n");
            } else {
                printf("Difference is less than or equal to 5 \n");
            }
            break;

        case 0:
            printf("Please give a larger value of n \n");
            break;
    }

    return 0;
}*/

/*#include<stdio.h>                         /// 03 == a
int main()
{
    int weeks = 2, days_in_week = 7;
    for (int i = 1; i <= weeks; ++i)
    {
        printf("Week: %d\n", i);
        for (int j = 1; j <= days_in_week; ++j)
        {
            if (i%2 == 0)
            {
                if(j%2 == 0)00
                    printf(" Day: %d\n", j);
            }
            else
            {
                if(j%2 != 0)
                    printf(" Day: %d\n", j);


            }
        }
    }
    return 0;
}*/

/*#include<stdio.h>               /// 03 == a using do while loop

int main()
{
    int weeks = 2, days_in_week = 7;
    int i = 1;

    do {
        printf("Week: %d\n", i);

        int j = 1;

        do {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                    printf(" Day: %d\n", j);
            }
            else
            {
                if (j % 2 != 0)
                    printf(" Day: %d\n", j);
            }

            j++;
        } while (j <= days_in_week);

        i++;
    } while (i <= weeks);

    return 0;
}*/
/*
#include <stdio.h>

int main() {
    int n, i, j, num;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf("   ");
        }

        num = 2 * i;
        // Print numbers in ascending order
        for (j = 1; j <= i; j++) {
            printf("%-3d", num);
            num += 2;
        }

        num -= 4;
        // Print numbers in descending order
        for (j = 1; j <= i - 1; j++) {
            printf("%-3d", num);
            num -= 2;
        }

        printf("\n");
    }

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n, a;
    scanf("%d %d", &n, &a);
    if(n>a)
    {
        if(n-a>5)
        {
            printf("Difference is greater than 5 \n");
        }
        else
        {
            printf("Difference is less than or equal to 5 \n");
        }
    }
    else
    {
        printf("Please give a larger value of n \n");
    }
    return 0;
}*/
