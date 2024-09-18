/*#include<stdio.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "Sazzad Hossain Imon";

    strcat(str1,str2);
    printf("str1 = %s\n",str1);
    printf("str2 = %s",str2);
}*/

/*#include<stdio.h>
int main()
{
    char str1[100] = "My name is ";
    char str2[] = "Sazzad Hossain Imon";

    int i = 0,len = 0,j = 0;

    while(str1[i] != '\0'){
        i++;
        len++;
    }

    while(str2[j] != '\0'){
            str1[len+j] = str2[j];
        j++;

    }
    printf("%s\n",str1);
}*/

/*#include<stdio.h>    ///  string compare
int main()
{
    char str1[] = "Sazzad Hossain";
    char str2[] = "Imon";

    int a = strcmp(str1,str2);

    if(a == 0){
        printf("String are equal.");
    }else{
         printf("String are not equal.");
    }

}*/

/*#include<stdio.h>        /// String reverse
int main()
{
    char str[] = "Sazzad Hossain";
    printf("str = %s\n",str);

    strrev(str);

    printf("str = %s\n",str);
}*/


/*#include<stdio.h>        /// find out palindrome
int main()
{
    char str1[50] = "Sazzad Hossain";
    char str2[50];

    int i = 0,len= 0,j;
    while(str1[i] != '\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++)
    {
        str2[j] = str1[i];
    }
    str2[j]='\0';
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

   int a = strcmp(str1,str2);
    if(a == 0)
    {
        printf("String is palindrome.");
    }
    else
    {
        printf("String is not palindrome.");
    }

}*/

#include<stdio.h>        /// string swap
int main()
{
    char str1[50] = "Bangladesh";
    char str2[50] = "India";
    char temp[50];

    printf("Before sawp\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("After swap\n");
    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);

}





























































