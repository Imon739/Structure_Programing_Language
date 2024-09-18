/*#include<stdio.h>   /// Find out prime number.

int main()
{
    int n, i, flag = 1;
    printf("Enter the number :");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if( n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("Prime number.");
    }else{
    printf("Not prime number.");
    }
    return 0;

}*/

#include<stdio.h>
int main()
{
    int a, b, max, min, rem;
    printf("Enter two number :");
    scanf("%d %d", &a, &b);

    if(a>b){
        max = a;
        min = b;
    }else{
    max = b;
    min = a;
    }
    while( max % min != 0)
    {
        rem = max % min;
        max = min;
        min = rem;

    }
    printf("GCD :%d",min);
    return 0 ;
}
