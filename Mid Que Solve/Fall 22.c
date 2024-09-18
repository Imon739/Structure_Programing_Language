/*#include<stdio.h>            ///    01 == a
int main()
{
    int a, b;
    float sum;
    scanf("%i", &a);
    a, b=10;
    sum = a+b;
    printf("%f", sum);
}*/

/*#include <stdio.h>          /// Manual tracing 02 == a
int main()
{
    int num;
    int sum = 10, i =7, j = 2;
    scanf("%d", &num);
    switch(num)
    {
    case 1:
    case 2:
        sum += --j*2;
        i--;
    case 3:
        sum = ++i*j--;
        break;
    case 4:
        sum *= i++/j--;
        i=i%j;
    default:
        break;
    }
    printf("%d %d %d",sum,i,j);
    return 0;
}*/

/*#include <stdio.h>             ///  02 == b  using if-else

int main() {
    int num;
    int sum = 10, i = 7, j = 2;

    scanf("%d", &num);

    if (num == 1 || num == 2) {
        sum += --j * 2;
        i--;
    }else if(num == 3){
        sum = ++i * j--;
    }else if(num == 4){
        sum *= i++ / j--;
        i = i % j;
    }

    printf("%d %d %d", sum, i, j);
    return 0;
}*/


/*#include <stdio.h>        /// 03 == a sum of series

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);

    int series[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &series[i]);
    }
     for (i = 0; i < n; i++){
        sum = sum + series[i];
     }
    printf("Sum: %d\n", sum);

    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int n, i;
    int dif = 5,ele = 0,sum = 0;
    scanf("%d",&n);

    for(i-0;i<n;i++){
        sum = sum + ele;
        printf("%d ",ele);
        ele = ele +dif;
        dif = dif + 8;

        if(i< n-1){
            printf(", ");
        }
    }
    printf("= %d",sum);
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int i, space, rows, k = 0, count = 0, count1 = 0;
    for (i = 1; i <= rows; ++i)
    {
        for (space = 1; space <= rows - i; ++space)
        {
            printf(" ");
            ++count;
        }
        while (k != 2 * i - 1)
        {
            if (count <= rows - 1)
            {
                printf("%d ", i + k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i + k - 2 * count1));
            }
            ++k;
        }
        count1 = count = k = 0;
        printf("\n");
    }
    return 0;
}*/

#include<stdio.h>        /// 04 == b find the maxium value
int main()
{
    int i, n, max, index_max;
    scanf("%d",&n);
    int marks[10];

    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    max = marks[0];
    index_max = -1;
    for(i=1;i<n;i++){
        if(i%2 == 0 && marks[i]>max  ){
            max = marks[i];
            index_max = i;
        }

    }
    printf("Even value max = %d, found in index %d", max, index_max);
    return 0;
}

/*#include<stdio.h>                 /// 05 == b pattern of Y shape
int main()
{
    int i, j, n;
    scanf("%d",&n);

    for(i=1;i<=(n-1)/2;i++){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        printf("*");
        for(j=1;j<=n-2*i;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(i=(n+1)/2;i<=n;i++){
        for(j=1;j<=(n-1)/2;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    return 0;
}*/
