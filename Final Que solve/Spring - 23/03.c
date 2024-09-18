/*#include <stdio.h>           /// num 03
#include <string.h>

// Define the Employee structure
struct Employee {
    int id;
    char name[100];
    float salary;
    int scores[12];
};

// Function to calculate the average performance score
float calculateAverageScore(int scores[]) {
    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += scores[i];
    }
    return (float)sum / 12.0;
}

int main() {
    int N;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &N);

    // Declare an array of Employee structures
    struct Employee employees[N];

    // Input employee details and performance scores
    for (int i = 0; i < N; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        employees[i].id = i + 1;
        printf("Name: ");
        scanf("%s", employees[i].name); // Assuming names don't contain spaces
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Enter 12 performance scores:\n");
        for (int j = 0; j < 12; j++) {
            printf("Month %d: ", j + 1);
            scanf("%d", &employees[i].scores[j]);
        }
    }

    // Calculate and check eligibility for increment
    printf("\nEligibility for yearly increment:\n");
    for (int i = 0; i < N; i++) {
        float averageScore = calculateAverageScore(employees[i].scores);
        printf("Employee with id=%d (%s) has an average score of %.2f. ", employees[i].id, employees[i].name, averageScore);

        if (averageScore > 80) {
            printf("Eligible for increment.\n");
        } else {
            printf("Not eligible for increment.\n");
        }
    }

    return 0;
}*/


/*#include <stdio.h>                 ///  04 b

// Function to compute weight and milk production of a cow using call by reference
void computeWeightAndMilk(int x, float a, float b, float c, float d, float *weight, float *milk) {
    // Calculate weight
    *weight = (a * x * x) + (b * x);

    // Calculate milk production
    *milk = (c * x) - (d * (*weight));
}

int main() {
    int x = 35;
    float a = 0.87, b = 0.45, c = 800, d = 3.5;
    float weight, milk;

    // Call the computeWeightAndMilk function to calculate weight and milk production
    computeWeightAndMilk(x, a, b, c, d, &weight, &milk);

    // Display the results
    printf("Weight of the cow: %.2f kg\n", weight);
    printf("Average milk production of the cow: %.2f liters\n", milk);

    return 0;
}*/


#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int num;
    int sum = 0;

    // Open the input file "Sample.txt" for reading
    inputFile = fopen("Sample.txt", "r");

    // Check if the input file exists
    if (inputFile == NULL) {
        printf("Error opening the input file.\n");
        return 1;
    }

    // Read integers from the input file and calculate the sum of values divisible by 7
    while (fscanf(inputFile, "%d", &num) != EOF) {
        if (num % 7 == 0) {
            sum += num;
        }
    }

    // Close the input file
    fclose(inputFile);

    // Open the output file "Output.txt" for writing
    outputFile = fopen("Output.txt", "w");

    // Check if the output file is opened successfully
    if (outputFile == NULL) {
        printf("Error opening the output file.\n");
        return 1;
    }

    // Write the sum to the output file
    fprintf(outputFile, "Sum: %d\n", sum);

    // Close the output file
    fclose(outputFile);

    printf("Sum of values divisible by 7: %d\n", sum);

    return 0;
}









