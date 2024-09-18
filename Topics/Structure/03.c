/*#include<stdio.h>

struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person1 = {25, 30500.25};
    struct person person2, person3;

    person2.age = 30;
    person2.salary = 40500.25;

    person3 = person2;

    if(person1.age == person2.age && person1.salary == person2.salary){
        printf("person1 equal person2");
    }else{
        printf("person1 not equal person2");
    }


    getch();
}*/

/*#include<stdio.h>

struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;

    for(i=0;i<4;i++)
    {
          printf("Enter information Person %d\n",i+1);
          printf("Enter age : ");
          scanf("%d",&person[i].age);

          printf("Enter salary : ");
          scanf("%f",&person[i].salary);
    }

        for(i=0;i<4;i++)
    {
          printf("Information for Person %d\n",i+1);
          printf("Age : %d\n",person[i].age);

          printf("Salary : %f\n",person[i].salary);

    }
    getch();
}*/


/*#include<stdio.h>

struct person
{
    char name[100];
    int age;
    float salary;
};

int main()
{
    struct person person[4];
    int i;

    for(i=0;i<4;i++)
    {
          printf("Enter information Person %d\n",i+1);

          printf("Enter name :");
          fflush(stdin);
          gets(person[i].name);

          printf("Enter age : ");
          scanf("%d",&person[i].age);

          printf("Enter salary : ");
          scanf("%f",&person[i].salary);
    }

        for(i=0;i<4;i++)
    {
          printf("Information for Person %d\n",i+1);

          printf("Name : %s\n",person[i].name);
          printf("Age : %d\n",person[i].age);

          printf("Salary : %f\n",person[i].salary);

    }
    getch();
}*/


#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;

};

void display(struct person p)
{
    printf("name : %s\n",p.name);
    printf("age : %d\n",p.age);
    printf("salary : %f",p.salary);

}

int main()
{
    struct person person1;

    strcpy(person1.name,"Imon");
    person1.age = 21;
    person1.salary = 20000.567;

    display(person1);

    getch();
}




















































