/*#include<stdio.h>

int main()
{
    FILE *file;
    char name[20];

    file = fopen("test.txt","w");

    if(file == NULL){
        printf("File does not exist");
    }else{
        printf("File is opened\n");
        printf("Enter your name\n");
        gets(name);


        fputs(name,file);
        printf("File is written successfully\n");
        fclose(file);

    }
    getch();
}*/
/*
#include<stdio.h>

int main()
{
    FILE *file;
    char name[20];
    int age;

    file = fopen("test.txt","a");

    if(file == NULL){
        printf("File does not exist");
    }else{
        printf("File is opened\n");

        printf("Enter your name :\n");
        gets(name);

        printf("Enter your age :");
        scanf("%d",&age);

        fprintf(file,"Name is = %s,Age is = %d\n",name,age);

        printf("File is written successfully\n");
        fclose(file);

    }
    getch();
}*/

#include<stdio.h>

int main()
{
    FILE *file;
    char ch[100];
    int age;

    file = fopen("test.txt","r");

    if(file == NULL){
        printf("File does not exist");
    }else{
        printf("File is opened\n");

        while(!feof(file))
        {
            fgets(ch,99,file);
            printf("%s\n",ch);
        }


        fclose(file);

    }
    getch();
}











































