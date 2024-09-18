/*#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("Number of days: 31\n");
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("Number of days: 30\n");
            break;

        case 2:  // February
            printf("Number of days: 28 or 29\n");
            break;

        default:
            printf("Invalid month number!\n");
            break;
    }

    return 0;
}*/

#include <stdio.h>
int main()
{
    int a = 15, b = 17;
    int var1 = a ^ b;
    printf("Output 1 = %d\n", var1);
    int c = ++a;
    c++;
    printf("Output 2 = %d %d\n",a,c);
    int d = b + 17.8;
    printf("Output 3 = %d\n",d);
    int e = a << 2;
    int f = b >> 3;
    printf("Output 4 = %d\n",e);
    printf("Output 5 = %d\n",f);
    d *= 10;
    printf("Output 6 = %d\n",d);
    int g = (10 > 12) ? 20 : 30;
    printf("Output 7 = %d\n",g);
    int h = g++;
    printf("Output 8 = %d %d\n",h,g);
    int i = (int) 20.5 + 14.9;
    int j = 20.5 + 14.9;
    printf("Output 9 = %d %d\n",i,j);
    printf("Output 10 = Best of Luck :D !!!");
}
