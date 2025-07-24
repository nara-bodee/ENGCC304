#include <stdio.h>

int main(){
    char EmployeeID[11];
    int workingHours;
    int salaryPerHour;
    float salary;
    printf("Input the Employees ID(Max. 10 chars): \n");
    scanf("%s", &EmployeeID);
    printf("Input the working hrs: \n");
    scanf("%d", &workingHours);
    printf("Salary amount/hr: \n");
    scanf("%d", &salaryPerHour);
    salary = workingHours * salaryPerHour;
    printf("\n");
    printf("Expected Output: \n");
    printf("Employee ID = %s\n", EmployeeID);
    printf("Salary = U$ %.2f\n", salary);
}