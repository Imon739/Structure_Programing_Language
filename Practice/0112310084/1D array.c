#include <stdio.h>
int main()
{

    int a, b, temp = 0, count_i = 0, sum = 0, i, count1 = 0, t = 0;
    int counter = 0;
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++){
        int t = i;
        int t2 = i;
        while (t > 0)
        {
            temp = t % 10;
            count_i++;
            t = t / 10;
        }
        int digits[count_i];

        t = i;
        for (int j = count_i - 1; j >= 0; j--){
            digits[j] = t % 10;
            t /= 10;
        }

        for (int j = 0; j < count_i; j++){
            if (j % 2 != 0)
            {
                sum = sum + digits[j];
            }
        }

        if (count_i > 2 && count_i < 6 && sum > 8 && sum % 4 == 0){
            counter++;
        }
        count_i = 0;
        sum = 0;
    }

    printf("\n%d : ", counter);
    for (i = a; i <= b; i++){
        int t = i;
        int t2 = i;
        while (t > 0)
        {
            temp = t % 10;
            count1++;
            t = t / 10;
        }
        int digits[count1];

        t = i;
        for (int j = count1 - 1; j >= 0; j--){
            digits[j] = t % 10;
            t /= 10;
        }

        sum = 0;
        for (int j = 0; j < count1; j++){
            if (j % 2 != 0)
            {
                sum = sum + digits[j];
            }
        }

        if (count1 > 2 && count1 < 6 && sum > 8 && sum % 4 == 0){
            printf("%d ", i);
        }
        count1 = 0;
        sum = 0;
    }

    return 0;
}

