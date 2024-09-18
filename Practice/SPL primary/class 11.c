/*#include<stdio.h>  /// 2 4 6 8 10
int main()
{
    int i, num[10];
    int temp = 2;
    for(i=0; i<10; i++)
    {
        num[i] = temp;
        temp =temp +2;

        printf("%d ",num[i]);
    }
    return 0;
}*/
/*#include<stdio.h>  /// 10 1 10 2 10 3
int main()
{
    int i, num[10];
    int temp= 1;
    for(i=0;i<10;i++){
        if(i%2 == 0){
            num[i]=10;
        }else{
        num[i]=temp;
        temp = temp +1;

        }
        printf("%d ",num[i]);
    }
    return 0;
}*/

/*#include<stdio.h>   ///10 3 20 6 30 9 40 12 50 15

int main()
{
    int i, num[10];
    int temp1 = 10;
    int temp2 = 3;

    for(i=0;i<10;i++){
        if(i%2 == 0){
            num[i] = temp1;
            temp1 = temp1 +10;
        }else{
        num[i] = temp2;
        temp2 = temp2 + 3;
        }
        printf("%d ", num[i]);
    }
    return 0;
}*/

#include<stdio.h>    ///find out the max value

int main()
    int n, i;
    int num[10];

    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max = num[0];
    for(i=1;i<n;i++){
        if(num[i]>max){
            max = num[i];
        }

    }
    printf("maximum number is %d",max);
    return 0;
}
