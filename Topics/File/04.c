#include<stdio.h>

int main()
{
    FILE *file;
    char name[100];
    int age,id,num,i;

    file = fopen("student.txt","a");

    if(file == NULL){
        printf("File does't exist");
        }else{
        printf("File is opened\n");

        printf("Enter number of student : ");
        scanf("%d",&num);

        for(i=1;i<=num;i++){
            printf("Enter student name : ");
            scanf("%s",&name);

            printf("Enter student age :");
            scanf("%d",&age);

            printf("Enter student ID number : ");
            scanf("%d",&id);

            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,id);
        }

        fclose(file);
    }

    getch();
}
