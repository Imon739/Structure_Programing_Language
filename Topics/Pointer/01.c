/*#include<stdio.h>

int main()
{
    int x = 5;
    int *ptr;

    ptr = &x;

    printf("%d\n",x);
    printf("%d\n",&x);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);

}*/

/*#include<stdio.h>

int main()
{
    int x = 10, y = 20,z = 30;

    int *ptr;

    ptr = &x;
    printf("x = %d\n",*ptr);
    printf("Adddres of x = %d\n",ptr);
    printf("Adddres of pointer = %d\n",&ptr);

    ptr = &y;
    printf("y = %d\n",*ptr);
    printf("Adddres of y = %d\n",ptr);
    printf("Adddres of pointer = %d\n",&ptr);

    ptr = &z;
    printf("z = %d\n",*ptr);
    printf("Adddres of x = %d\n",ptr);
    printf("Adddres of pointer = %d\n",&ptr);
}*/

/*#include<stdio.h>

int main()
{
    int x = 10, y = 20,sum;

    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1 + *ptr2;

    printf("Sum = %d\n",sum);
}*/

/*#include<stdio.h>
int main()
{
    int x = 10,y = 20,temp;

    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("x = %d\n",x);
     printf("y = %d\n",y);

}*/

/*#include<stdio.h>

void func(int *ptr1,int *ptr2)
{
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;


}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Before swapping : X = %d, Y = %d\n",x,y);

    func(&x,&y);

    printf("After swapping : X = %d, Y = %d\n",x,y);
}*/




















































































