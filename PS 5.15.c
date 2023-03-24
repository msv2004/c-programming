program to find the employee no, names, salary, doj using nested structure

#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int emp_no;
    char emp_name[20];
    float emp_salary;
    struct Date emp_doj;
};

int main() {
    struct Employee emp1 = {101, "sai", 45000, {10, 2, 2020}};
    struct Employee emp2 = {102, "msv", 55000, {5, 7, 2019}};
    
    printf("Employee 1:\n");
    printf("  Employee number: %d\n", emp1.emp_no);
    printf("  Name: %s\n", emp1.emp_name);
    printf("  Salary: %.2f\n", emp1.emp_salary);
    printf("  Date of Joining: %d-%d-%d\n", emp1.emp_doj.day, emp1.emp_doj.month, emp1.emp_doj.year);
    
    printf("\nEmployee 2:\n");
    printf("  Employee number: %d\n", emp2.emp_no);
    printf("  Name: %s\n", emp2.emp_name);
    printf("  Salary: %.2f\n", emp2.emp_salary);
    printf("  Date of Joining: %d-%d-%d\n", emp2.emp_doj.day, emp2.emp_doj.month, emp2.emp_doj.year);
    
    return 0;
}
//OUTPUT:
Employee 1:
Employee number: 101
Name: sai
Salary: 45000.00
Date of Joining: 10-2-2020
Employee 2:
Employee number: 102
Name: msv
Salary: 55000.00
Date of Joining: 5-7-2019
