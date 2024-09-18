/*#include<stdio.h>                        /// Demogorgon Number
int checkerfunc1(int a){
    int even=0,odd=0;
    while(a!=0){
        int temp=a%10;
        if(temp%2==0){
            even+=temp;
        }else{
            odd+=temp;
        }
        a=a/10;
    }
    if(odd<even)
    return 1;
    else
    return 0;
}
int checkerfun2(int a){
    if(primechecker(a)&&defective(a))
    return 1;
    else
    return 0;
}
int primechecker(int a){
    int check=a>1?1:0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            check=0;
            break;
        }
    }
    return check;
}
int fact(int a){
    if(a==0)
    return 1;
    return fact(a-1);
}
int sum_fact(a){
    if(a==0)
    return 0;
    return fact(a%10)+sum_fact(a/10);
}
int defective(int a){
    if(a==sum_fact(a))
    return 0;
    else
    return 1;
}
int demogorgon(int a){
    if(checkerfunc1(a)&&checkerfun2(a))
    return 1;
    else
    return 0;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<b;i++){
        if(demogorgon(i))
        printf("%d ",i);
    }
    return 0;
}*/

/*#include<stdio.h>               /// fibbonacci

int main(){
    int n;
    scanf("%d",&n);
    int first=-1,second=1;
    for(int i=0;i<n;i++){
        int third=first+second;
        first=second;
        second=third;
        printf("%d ",third);
        if(third==0)
        printf("& ");
        else if(third%2==0)
        printf("$ ");
        else
        printf("# ");

    }
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
typedef struct{
    char id[20];
    char name[20];
    char birthday[20];
    char house[20];
    int pur[3];
    float avg;
}customer;
int substringchecker(char *main,char *sea){
    for(int i=0;*(main+i)!='\0';i++){
        int check=1;
        for(int j=i,k=0;*(sea+k)!='\0';k++,j++){
            if(*(main+j)!=*(sea+k)){
                check=0;
                break;
            }
        }
        if(check)
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    float avg1=0,avg2=0;
    scanf("%d",&n);
    customer c[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        // gets(c[i].id);
        gets(c[i].name);
        gets(c[i].birthday);
        gets(c[i].house);
        fflush(stdin);
        float sum=0;
        for(int j=0;j<3;j++){
        scanf("%d",&c[i].pur[j]);
        sum+=c[i].pur[j];
        }
        c[i].avg=sum/3.0;
        if(!strcmp(c[i].house,"Gryffindor")&&avg1<c[i].avg&&substringchecker(c[i].name,"est"))
        avg1=c[i].avg;
        if(!strcmp(c[i].house,"Slytherin")&&avg2<c[i].avg&&substringchecker(c[i].name,"rus"))
        avg2=c[i].avg;
        fflush(stdin);
    }
    printf("%f %f\n\n",avg1,avg2);
    int count=0;
    printf("Gryffindor:\n");
    for(int i=0;i<n;i++){
        if(!strcmp(c[i].house,"Gryffindor")){
            char text[]="est";
            if(substringchecker(c[i].name,text)&&avg1==c[i].avg){
                puts(c[i].name);
                puts(c[i].birthday);
                printf("%.2f\n",c[i].avg);
                count++;
            }
        }
    }
    if(count==0)
    printf("Nil\n\n");

    count=0;
    printf("Slytherin\n");
    for(int i=0;i<n;i++){
        if(!strcmp(c[i].house,"Slytherin")){
            char text[]="rus";
            if(substringchecker(c[i].name,text)&& avg2==c[i].avg){
                puts(c[i].name);
                puts(c[i].birthday);
                printf("%.2f\n",c[i].avg);
                count++;
            }
        }
    }
    if(count==0)
    printf("Nil\n\n");

}*/
