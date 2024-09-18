#include<stdio.h>

enum days_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,sat
};

int main()
{
    enum days_of_week day1, day2;

    day1 = Sun;
    printf("Day1 = %d\n",day1);

    getch();
}
