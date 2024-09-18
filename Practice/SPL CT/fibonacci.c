#include <stdio.h>

int main() {
  int n, i;
   scanf("%d", &n);
  int fib[100];

  fib[0] = 0;
  fib[1] = 1;

  for (i = 2; i <= 100; i++) {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  printf("The %dth Fibonacci number is %d\n", n, fib[n]);

  return 0;
}

