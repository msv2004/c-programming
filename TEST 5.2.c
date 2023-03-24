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

Enter the marks in Python: 85
Enter the marks in C programming: 99
Enter the marks in Mathematics: 88
Enter the marks in Physics: 77
Total= 349
Aggregate = 87.2
DISTINCTION
