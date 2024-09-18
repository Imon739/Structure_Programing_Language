#include<stdio.h>
int main()
{
    int i, sum = 0;


    int num[5];
 float avg;

    for(i=0; i<5; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Printing value : ");
    for(i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
    printf("\n");
     printf("Reverse value :");
    for(i=4;i>=0;i--){
        printf("%d ",num[i]);
    }
    printf("\n");
    for(i= 0 ; i<5;i++){
        sum = sum + num[i];
    }
    avg = (float)sum/5;
    printf("Averge : %.2f",avg);

    return 0;
}
