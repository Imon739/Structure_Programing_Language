#include<stdio.h>

int main()
{

    ///SEARCHING
    int arr[5] = {10,20,30,40,50};
    int N = 40;
    int index = -1;

    for(int i =0; i<5; i++)
    {
        if(arr[i]==N)
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
        printf("NOt found");
    }
    else
    {
        printf("Element found at index %d",index);
    }


    /*
    ///GRADES COUNT
    int marks[10] = {12,34,65,87,45,68,32,89,97,67};
    int grades[6] = {0,0,0,0,0,0};
    int stdMark;

    for(int i=0; i<10; i++)
    {
        stdMark = marks[i];

        if(stdMark>90 && stdMark<=100)
        {
            grades[0]++;
        }
        else if(stdMark>80 && stdMark<=90)
        {
            grades[1]++;
        }
        else if(stdMark>70 && stdMark<=80)
        {
            grades[2]++;
        }
        else if(stdMark>60 && stdMark<=70)
        {
            grades[3]++;
        }
        else if(stdMark>50 && stdMark<=60)
        {
            grades[4]++;
        }
        else if(stdMark>=0 && stdMark<=50)
        {
            grades[5]++;
        }
        else
        {
            printf("Invalid Marks\n");
        }
    }

    printf("A Grades = %d\n",grades[0]);
    printf("B Grades = %d\n",grades[1]);
    printf("C Grades = %d\n",grades[2]);
    printf("D Grades = %d\n",grades[3]);
    printf("E Grades = %d\n",grades[4]);
    printf("F Grades = %d\n",grades[5]);
    */

    /*
    ///LEFT ROTATION
    int arr[5] = {1,2,3,4,5};
    int N = 2;

    for(int j=1; j<=N; j++) ///no of rotations
    {
        int temp = arr[0];
        for(int i=1; i<5; i++)
        {
            arr[i-1] = arr[i];
        }
        arr[4] = temp;
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    */


}
