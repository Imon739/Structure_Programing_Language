/*#include <stdio.h>     ///number -- 4

int main() {
  int n, i, x;
  float sum = 0;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
        x = 2 *i -1 ;
    sum += (float)( x*x) / (float)(x*x*x);
  }

  printf("The sum of the series is: %.2f\n", sum);

  return 0;
}*/

#include <stdio.h>
#include <math.h>

int main() {
  int num, temp, digit, sum = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  temp = num;
  while (temp > 0) {
    digit = temp % 10;
    sum += pow(digit, 3);
    temp /= 10;
  }

  if (num == sum) {
    printf("%d is an Armstrong number.\n", num);
  } else {
    printf("%d is not an Armstrong number.\n", num);
  }

  return 0;
}
