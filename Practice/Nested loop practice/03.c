/*#include <stdio.h>

int main() {
  int n, i, count = 0;


  scanf("%d", &n);
  char arr[100];

  printf("Enter the alphabets: ");
  for (i = 0; i < n; i++) {
    scanf(" %c", &arr[i]);
  }

  for (i = 0; i < n; i++) {
    if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' ||
        arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
      count = count + i;
    }
  }

  printf("Count: %d\n", count);

  return 0;
}*/

#include<stdio.h>    ///SEARCHING

int main()
{


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

}
