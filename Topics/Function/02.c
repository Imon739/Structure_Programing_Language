/*#include<stdio.h>
void calculatePower(double base, double exp){
        double result = 1,i;
     for(i=1;i<=exp;i++){
        result = result * base;
     }
     printf("%.2lf",result);
}
int main()
{
    double base, exp;

    scanf("%lf",&base);
    scanf("%lf",&exp);

    calculatePower(base, exp);

}*/

/*#include<stdio.h>
int main()
{
    double base, exp, result;
    scanf("%lf",&base);
    scanf("%lf",&exp);

    result = pow(base,exp);
    printf("%lf",result);
}*/


/*#include<stdio.h>           /// passing array into in a function

void display(int x[])
{

    for(int i = 0; i<5 ;i++){
        printf("%d ",x[i]);
    }
}
int main()
{
    int num[] = {10, 20, 30, 40, 50};

    display(num);
}*/

/*#include<stdio.h>           /// passing array into in a function

int max(int x[])
{
    int max = x[0];

    for(int i = 0; i<5 ;i++){
        if(max < x[i]){
            max = x[i];
        }
    }
    return max;
}
int main()
{
    int num[] = {10, 20, 30, 40, 50};

    int maxValue = max(num);
    printf("%d",maxValue);
}*/

/*#include<stdio.h>       /// passing array into function

void display(char str1[])
{
    int i = 0;
    while(str1[i] != '\0'){
        printf("%c\n",str1[i]);
        i++;

    }

}

int main()
{
    char str[] = "Imon";
    display(str);
}*/















































































