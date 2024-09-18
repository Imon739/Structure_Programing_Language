#include<stdio.h>
int main()
{
    int i, n, sum =0, avg, count=0, arr [100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
          scanf("%d", &arr [i]);
    }

    printf("index: value: ");
    for (i=0; i<n; i++)
    {
         printf ("\n");
    printf("%2d      2d",i,arr[i]);
    }

for (i=0; i<n; i=i+2)
{
    sum-sum+arr[i];
    count=count+1;
}
    avg=sum/count;
    printf("\nAvg: %d", avg);
    return 0;
}
