/*#include <stdio.h>                  /// find the output fot num = 1, 3;
int main()
{
    int num;
    int sum = 0, i = 10, j = 5;
    scanf("%d", &num);
    switch(num)
    {
    case 1:
        sum = 2*i++;
        j++;
    case 2:
        sum = 2*j--;
        i++;
        break;
    case 3:
        sum = ++i*j--;
    case 4:
        sum = i++*j--;
    default:
        sum=0;
        i=0;
        j=0;
    }
    printf("%d %d %d", i, j, sum);
    return 0;
}*/
/*
#include<stdio.h>                   /// 03 == a

int main() {
    int n = 3;
    int i = 0, j = 0, sum = 0;

    do {
        j = 0;

        do {
            if (i == j) {
                sum += i + j;
            } else if (i > j) {
                sum += i + n;
            } else {
                sum += n - j;
            }

            j++;
        } while (j <= i);

        i++;
    } while (i < n);

    return 0;
}*/

/*
#include <stdio.h>                      ///  05 == b

int main()
{
    int i, j, n;
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 2*i; j > 1; j-=2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n = 3, i, j, sum = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            if(i == j) sum += i + j;
            else if(i > j) sum += i + n;
            else sum += n – j;

        }
    }
}*/
