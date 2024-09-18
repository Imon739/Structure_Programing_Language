/*#include<stdio.h>

void func(int *arr,int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

    func(arr,n);

    return 0;
}*/

#include<stdio.h>

int main()
{
    int marks[2][3];

    marks[0][0] = 90;
    marks[0][1] = 80;
    marks[0][2] = 85;

    marks[1][0] = 95;
    marks[1][1] = 83;
    marks[1][2] = 80;

    printf("%d",marks[0][0]);

}























