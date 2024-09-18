/*#include <stdio.h>         /// num = 09

int main() {
    int n, i, search, found = 0;
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Found at %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("NOT FOUND.\n");
    }

    return 0;
}*/

/*#include<stdio.h>         /// num = 09
int main()
{
    int i, n;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array A:");
    for(i=0;i<n;i++){
     printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Array B:");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>                   /// num = 10
int main() {
    int n, m;
    int arrA[100], arrB[100];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arrA[i]);
    }
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &arrB[i]);
    }
    printf("Array A: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arrB[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrA[i]);
    }
    printf("\n");

    return 0;
}*/

/*#include<stdio.h>        /// num = 11
int main()
{
    int i, n;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] %3 == 0){
            arr[i] = -1;
        }
    printf("%d",arr[i]);
    }

    return 0;
}*/
