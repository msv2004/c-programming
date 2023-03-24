#include <stdio.h>

int main() {
    float python_marks, c_marks, math_marks, physics_marks, total, aggregate;
    char grade;

    printf("Enter the marks in Python: ");
    scanf("%f", &python_marks);
    printf("Enter the marks in C programming: ");
    scanf("%f", &c_marks);
    printf("Enter the marks in Mathematics: ");
    scanf("%f", &math_marks);
    printf("Enter the marks in Physics: ");
    scanf("%f", &physics_marks);

    total = python_marks + c_marks + math_marks + physics_marks;
    aggregate = total / 4;

    printf("Total= %.0f\n", total);
    printf("Aggregate = %.1f\n", aggregate);

    if (aggregate >= 75) {
        grade = 'D';
    }
    else if (aggregate >= 60) {
        grade = 'F';
    }
    else if (aggregate >= 50) {
        grade = 'S';
    }
    else if (aggregate >= 40) {
        grade = 'T';
    }
    else {
        grade = 'F';
    }

    switch(grade) {
        case 'D':
            printf("DISTINCTION");
            break;
        case 'F':
            printf("FIRST DIVISION");
            break;
        case 'S':
            printf("SECOND DIVISION");
            break;
        case 'T':
            printf("THIRD DIVISION");
            break;
        default:
            printf("FAIL");
            break;
    }

    return 0;
}

//OUTPUT:
//TEST CASES:
Enter the marks in python: 90
Enter the marks in c programming: 91
Enter the marks in Mathematics: 92
Enter the marks in Physics: 93
Total= 366
Aggregate = 91.5
DISTINCTION

Enter the marks in Python: 18
Enter the marks in C programming: 76
Enter the marks in Mathematics: 93
Enter the marks in Physics: 65
Total= 252
Aggregate = 63.0
FIRST DIVISION

Enter the marks in Python: 73
Enter the marks in C programming: 78
Enter the marks in Mathematics: 79
Enter the marks in Physics: 75
Total= 305
Aggregate = 76.2
DISTINCTION

Enter the marks in Python: 96
Enter the marks in C programming: 73
Enter the marks in Mathematics: -85
Enter the marks in Physics: 95
Total= 179
Aggregate = 44.8
THIRD DIVISION

Enter the marks in Python: 78
Enter the marks in C programming: 59.5
Enter the marks in Mathematics: 76
Enter the marks in Physics: 79
Total= 292
Aggregate = 73.1
FIRST DIVISION

