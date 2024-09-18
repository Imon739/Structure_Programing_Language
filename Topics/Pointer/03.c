/*#include<stdio.h>
int main()
{
    int a,b;
    int *ptr1,*ptr2;

    ptr1 = &a;
    ptr2 = &b;

    scanf("%d",ptr1);
    scanf("%d",ptr2);

    int result = (*ptr1) * (*ptr2);

    printf("Answer is %d",result);

}*/


#include<stdio.h>

void func(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("After sawp : a = %d, b = %d",*x,*y);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Before sawp : a = %d, b = %d\n",a,b);

    func(&a,&b);


}

































