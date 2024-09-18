/*#include<stdio.h>         ///  num = 01

int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>             /// num = 02
int main()
{
    int i, n, sum=0;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }for(i=0;i<n;i++){
    sum = sum + arr[i];
    }
    printf("%d", sum);
    return 0;
}*/

/*#include <stdio.h>               /// num = 03

int main() {
    int n, i,  sum = 0;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even integers: %d\n", sum);

    return 0;
}*/


#include<stdio.h>               /// num = 06
int main()
{

    int i, n, max, min, index_max, index_min;
    scanf("%d", &n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    index_max = 0;
    index_min = 0;
    for(i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
            index_max = i;
        }else if(arr[i] < min){
        min = arr[i];
        index_min = i;
        }
    }
    printf("Max is %d. index is %d \n", max, index_max);
    printf("Min is %d. index is %d ", min, index_min);

    return 0;
}

/*#include<stdio.h>       /// num = 07
int main()
{
    int i, n, count = 0;
    scanf("%d", &n);
    char arr[n];

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
        arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U'){
                        count = count + arr[i];
        }
    }
    printf("Count: %d",count);
    return 0;
}*/
