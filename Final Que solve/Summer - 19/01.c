/*#include<stdio.h>
int main()
{
    char str1[7]={'\0'};
char str2[4]={'\0'};
int i, k;
strcpy(str1, "CSE");
strcpy(str2, "UIU");
i=strlen(str1);
for(k=0; str2[k] !='\0'; ++k)
 str1[i+k]=str2[k];
puts(str1);
printf("\n");
strrev(str1);
puts(str1);
}*/

/*#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);
    int nums[n][n];

    // Input nums
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &nums[i][j]);
        }
    }

    // Display even column wise check
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( nums[i][j] % 2 == 0 ) printf("%d ",nums[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/
/*
#include<stdio.h>
int a, b;
int func1(float x);
void func2(int x, float y);
int main(){
 a=11;
 b=25;
  printf("%d %d\n", a, b);
 a=func1(5.5);
 func2(12, 15.0);
 printf("%d %d\n", a, b);
 return 0;
 }
int func1(float x) {
 b=b+a;
 printf("%f\n", x);
 func2(5, 4.5);
 return b;
}
void func2(int x, float y){
 printf("%d %f\n", x, y);
 return;
}

*/

/*#include <stdio.h>
int main(){

    FILE *fp;
    fp = fopen("3B.txt","r");
    int numbers[10];
    for(int i=0;i<10;i++){
        fscanf(fp,"%d",&numbers[i]);
    }
    int max = numbers[0];
    for(int i=0;i<10;i++){
         printf("%d ", numbers[i]);
        if( numbers[i] > max ) max = numbers[i];
    }
    printf("\n\tMax Value: %d\n", max);
    return 0;
}*/

/*#include <stdio.h>
int main(){

    FILE *fp;
    fp = fopen("3B.txt","r");

    int max,n;
    fscanf(fp,"%d",&max);
    for(int i=0;i<10;i++){
    fscanf(fp,"%d",&n);


    if( n > max ) max = n;
    }

   fclose(fp);

    printf("\n\tMax Value: %d\n", max);
    return 0;
}
*/

/*#include <stdio.h>

int main(){
    int *a,*b,*sum;

    // Allocating memory for the pointers
    a = (int*) malloc(sizeof(int));
    b = (int*) malloc(sizeof(int));
    sum = (int*) malloc(sizeof(int));

    scanf("%d%d", a,b);

    *sum = *a+*b;
    printf("Sum: %d\n", *sum);

    free(a); free(b); free(sum);    // free heap memory
    return 0;
}*/

















