/*#include<stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
}Date;

int main()
{
    Date start,end;

    printf("Enter start date :");
    scanf("%d %d %d",&start.day,&start.month,&start.year);

    printf("Enter end date :");
    scanf("%d %d %d",&end.day,&end.month,&end.year);

    printf("Start date :%d - %d - %d\n",start.day,start.month,start.year);
    printf("End date :%d - %d - %d",end.day,end.month,end.year);

    return 0;
}*/

/*#include<stdio.h>

typedef struct
{
    float x;
    float y;
}point;

int main()
{
    point A,B;
    scanf("%f %f",&A.x,&A.y);
    scanf("%f %f",&B.x,&B.y);

    float distance;
    distance = sqrt (pow((A.x - B.x),2) + pow((A.y -B.y),2));

    printf("The distance is : %.2f",distance);

    return 0;
}*/

/*#include<stdio.h>

typedef struct
{
    char name[50];
    int id;
    float mark;
    char grade;
}student;

char check_grade(student s)
{
    char g;
    if(s.mark >= 90)
        g = 'A';
    else if(s.mark >= 80)
         g = 'B';
    else if(s.mark >= 70)
         g = 'C';
    else if(s.mark >= 60)
         g = 'D';
    else
        g = 'F';
    return g;

}

int main()
{
    student st;

    printf("Enter Name : ");
    gets(st.name);

    printf("Enter ID : ");
    scanf("%d",&st.id);

    printf("Enter mark : ");
    scanf("%f",&st.mark);

    st.grade = check_grade(st);
    printf("%s %d %.2f %c\n",st.name,st.id,st.mark,st.grade);

    return 0;
}*/

/*#include<stdio.h>

typedef struct
{
    char name[50];
    int id;
    float mark;
    char grade;
}student;

char check_grade(student s)
{
    char g;
    if(s.mark >= 90)
        g = 'A';
    else if(s.mark >= 80)
         g = 'B';
    else if(s.mark >= 70)
         g = 'C';
    else if(s.mark >= 60)
         g = 'D';
    else
        g = 'F';
    return g;

}

int main()
{

    int i,n;
    scanf("%d",&n);

    fflush(stdin);

    student st[n];
    for(i=0;i<n;i++){

    printf("Enter Name : ");
    gets(st[i].name);

    printf("Enter ID : ");
    scanf("%d",&st[i].id);

    printf("Enter mark : ");
    scanf("%f",&st[i].mark);

    st[i].grade = check_grade(st[i]);

    char a[10];
    gets(a);
    }

    for(i=0;i<n;i++){
        printf("%s %d %.2f %c\n",st[i].name,st[i].id,st[i].mark,st[i].grade);
    }


    return 0;
}*/
