#include <stdio.h>

int main() {
    char empID[11]; 
    int hours;
    float rate, salary;

    printf("Input the Employees ID(Max. 10 chars):\n");
    scanf("%10s", empID); 

    printf("Input the working hrs:\n");
    scanf("%d", &hours);

    printf("Salary amount/hr:\n");
    scanf("%f", &rate);

    salary = hours * rate;

    printf("Expected Output:\n");
    printf("Employees ID = %s\n", empID);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
