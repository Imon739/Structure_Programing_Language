/*#include<stdio.h>               /// num == 02 a
void func(int x)
{
    if(x == 1)
        return;
    else
        printf("%d ",x);
    func(x-1);
    printf("%d ",x);
}
int main()
{
    func(3);
    return 0;
}*/

/*#include<stdio.h>          /// 02 b

int arrsum(int arr[],int n)
{
    if(n==0)
        return;
    else
        return arr[n-1] + arrsum(arr,n-1);
}
int main()
{
    int n,arr[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = arrsum(arr,n);
    printf("%d",sum);
}*/


/*
#include<stdio.h>
int main()
{
    float n1, n2, sum = 0;
    FILE *fp;
    fp = fopen("input.txt","r");

    fscanf(fp,"%f %f",&n1,n2);

    sum = n1 +n2;
    printf("%f",sum);
    fclose(fp);
}*/


/*#include <stdio.h>          /// num 05 b

void perform_operation(int num1,int num2, int *sum,int *sub, int *mul, float *div){
    *sum = num1+num2;
    *sub = num1-num2;
    *mul = num1*num2;
    *div = (float)num1/num2;
}

int main(){

    int num1,num2;
    scanf("%d%d",&num1, &num2);

    int sum,sub,mul;

    float div;
    perform_operation(num1,num2,&sum,&sub,&mul,&div);
    printf("Sum:%d\n Sub:%d\n Mul:%d\n Div:%.2f\n",sum,sub,mul,div);
    return 0;
}*/


#include <stdio.h>            /// num 03

typedef struct {
    char name[20];
    int id;
    float marks;
} Student;

int main(){

    Student s[4];
    for(int i=0;i<4;i++){
        gets(s[i].name);
        scanf("%d", &s[i].id);
        getchar();
        scanf("%f", &s[i].marks);
        getchar();
    }

    for(int i=0;i<4;i++){
        printf("%s\t%d\t%.1f\n",s[i].name,s[i].id,s[i].marks);
    }

    int min_In = 0,max_In=0;
    for(int i=0;i<4;i++){
        if( s[i].marks < s[min_In].marks )
            min_In = i;
        if( s[i].marks > s[max_In].marks )
            max_In = i;
    }

    printf("Minimum marks holder student: %s %d\n",s[min_In].name,s[min_In].id);
    printf("Maximum Marks holder student: %s %d\n",s[max_In].name,s[max_In].id);

    return 0;
}



















































