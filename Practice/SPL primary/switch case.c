#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int salary[MAX_SIZE];
  int n = 0;
  char choice;

  do {
    printf("======= Office Pay Roll System =========\n");
    printf("* Enter 'x', to take salary of all employees into \"salary\" array of size N.\n");
    printf("* Enter 'y', to find and display the highest salary among all employees.\n");
    printf("* Enter 'z', to display salary of all employees.\n");
    printf("* Enter 'q', to quit/exit the menu system.\n");
    printf("\nEnter your choice: ");
    scanf(" %c", &choice);

    switch (choice) {
      case 'x':
        if (n == MAX_SIZE) {
          printf("Salary array is full. Please delete some data before adding more.\n");
        } else {
          printf("Enter salary of employee: ");
          scanf("%d", &salary[n]);
          n++;
        }
        break;
      case 'y':
        if (n == 0) {
          printf("No salary information is found. Please populate your salary information first.\n");
        } else {
          int max_salary = salary[0];
          for (int i = 1; i < n; i++) {
            if (salary[i] > max_salary) {
              max_salary = salary[i];
            }
          }
          printf("The highest salary is: %d\n", max_salary);
        }
        break;
      case 'z':
        if (n == 0) {
          printf("No salary information is found. Please populate your salary information first.\n");
        } else {
          printf("Salary of all employees:\n");
          for (int i = 0; i < n; i++) {
            printf("%d\n", salary[i]);
          }
        }
        break;
      case 'q':
        printf("Exiting the menu system.\n");
        break;
      default:
        printf("Invalid input.\n");
        break;
    }
  } while (choice != 'q');

  return 0;
}

