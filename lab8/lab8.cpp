#include<stdio.h>
int main() {
    int position, year, project;
    int base_salary[3] = {20000, 35000, 50000};
    int salary;
    float bonus, specialbonus, netSalary;

    printf("Position: ");
    scanf("%d", &position);
    printf("Years of Experience: ");
    scanf("%d", &year);
    printf("Number of Projects Completed this Year: ");
    scanf("%d", &project);

    salary = base_salary[position - 1];
    if (year < 1)
        bonus = 0;
    else if (year >= 1 && year <= 3)
        bonus = salary * 0.10;
    else if (year >= 4 && year <= 5)
        bonus = salary * 0.15;
    else
        bonus = salary * 0.20;

    if (project > 5)
        specialbonus = salary * 0.05;

    netSalary = salary + bonus + specialbonus;

    printf("Base Salary: %d THB\n", salary);
    printf("Experience Bonus: %.0f THB\n", bonus);
    printf("Special Bonus: %.0f THB\n", specialbonus);
    printf("Net Salary: %.0f THB\n", netSalary);

    return 0;
}