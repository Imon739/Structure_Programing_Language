/*#include<stdio.h>
int is_prime(int a){
    int check=a>1?1:0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            check=0;
            break;
        }
    }
    return check;
}
int power_of_2(int a){
    if(a==1)
    return 1;
    if(a%2!=0)
    return 0;
    power_of_2(a/2);
}
int is_mersenne(int a){
    if(is_prime(a)&&power_of_2(a+1))
    return 1;
    return 0;
}
int main(){
while(1)
{    int n;
    scanf("%d",&n);
    if(is_mersenne(n))
    printf("Yes\n");
    else
    printf("No\n");
}
}*/
#include<stdio.h>
typedef struct{
    char name[60];
    int stage;
    int HP;
    int price;
}card;
int ends_with(char *input,char letter){
    int i=0;
    while(*(input+i)!='\0')
    i++;
    if(*(input+i-1)==letter)
    return 1;
    return 0;
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    card pok[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        gets(pok[i].name);
        scanf("%d %d",&pok[i].stage,&pok[i].HP);
        pok[i].price=50;
        pok[i].price+=pok[i].HP;
        if(pok[i].stage==1)
        pok[i].price+=30;
        if(pok[i].stage==2)
        pok[i].price+=80;
        if(ends_with(pok[i].name,'X'))
        pok[i].price+=200;
        sum+=pok[i].price;
    }
    printf("%d\n",sum);
    return 0;
}
