#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);


    /*for(int i = 1; i<=N; i++)
    {
        for(int j = 1; j<=N; j++)
        {
            printf("*");
        }

        printf("\n");
    }*/



   /* for(int i = 1; i<=N; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }*/




     for(int i = 1; i<=N; i++) ///Line
    {
        for(int j = 1; j<=N-i; j++)  ///Space
        {
            printf(" ");
        }

         for(int j = 1; j<=i; j++) ///Star
        {
            printf("*");
        }

        printf("\n");
    }


    /*
      for(int i = 1; i<=N; i++) ///Line
    {
        for(int j = 0; j<=i-1; j++)  ///Space
        {
            printf(" ");
        }

         for(int j = 1; j<=N-i+1; j++) ///Star
        {
            printf("*");
        }

        printf("\n");
    }
    */

    /*
    for(int i=1; i<=N; i++)
    {
        printf("*");
    }
    printf("\n");

    for(int i=2; i<=N-1; i++) ///line
    {
        printf("*");

        for(int j=1; j<=N-2; j++) ///SPace
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

     for(int i=1; i<=N; i++)
    {
        printf("*");
    }
    */

    /*
    for(int i = 1; i<=N; i++)
    {
        /*
        if(i%2 == 1){
        for(int j = 1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
        }
        */
        /*
        if(i%2 == 0) continue;
        for(int j = 1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");

    } */

   /* int count = 1;
    for(int i = 1; i<=N; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d ",count);
            count++;
        }

        printf("\n");
    }*/




}
