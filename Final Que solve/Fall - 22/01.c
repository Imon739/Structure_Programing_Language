/*#include <stdio.h>
#define SIZE 4
void main(){
 int i, j, mat[SIZE][SIZE]={0};
 for(i=0; i<SIZE; i++){
 for(j=i+1; j<SIZE; j++)
 scanf("%d", &mat[i][j]);}
 for(i=0; i<SIZE-1; i++){
 for(j=i+1; j<SIZE; j++)
 scanf("%d", &mat[j][i]);}
 for(i=0;i<SIZE;i++){
 for(j=0;j<i;j++)
 mat[i][j]+=mat[j][i];}
 for(i=0;i<SIZE;i++){
 for(j=0;j<SIZE;j++){
 printf("%d\t",mat[i][j]);}
 printf("\n");}
}*/

#include<stdio.h>
 int a=0,b=0, c=0;
 int func1(int p) {
 c=p+a;
 return c;
 }
 int func3(int c){
 c = 2;
 a *=2;
 return c*a;
 }
 void func2(int x, int b){
 x *= 2;
 b = func3(x);
 }
 void main(){
 a = 2121 % 47;
 func3(a);
 printf("%d %d %d \n",a,b,c);
 b = func1(a);
 printf("%d %d %d \n",a,b,c);
 func2(a,b);
 printf("%d %d %d \n",a,b,c);
 }

/*#include <stdio.h>                /// num = 02 b

void additems( int items[] , int add[], int n ) {
    for(int i=0;i<n;i++){
        items[i] = items[i] + add[i];
    }
}

void openDoor(char password[]){
    if (password = "Narnia") printf("Door to Narmia is open.\n");
    else printf("There is no door.\n");
}

int main(){

    int items[1000],add[1000];

    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &items[i]);
    }

    for(int i=0;i<n;i++){
        scanf("%d", &add[i]);
    }

    additems(items,add,n);

    char pass[20];
    scanf("%s",&pass);
    openDoor(pass);

    return 0;
}*/
