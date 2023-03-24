1 .Mr. Johnson would like to know how many As, Bs, Cs, Ds, and Fs his students received on a test. He has n students who took the test. He would like to enter the student number and the number grade for the test for each student using structure. Develop the solution to print out each student's student number, number grade and the total number of As, Bs, Cs, Ds, and Fs. His grading scale is as follows: 90-100 is an A, 78-89 is a B, 65-77 is a C, 50-64 is a D, and below 50 is an F.

 #include <stdio.h>

struct student {
    int number;
    char grade;
};

int main() {
    int n;
    printf("Enter No. Students: ");
    scanf("%d", &n);

    struct student students[n];

     for (int i = 0; i < n; i++) {
        printf("Enter student %d Number, Grade: ", i+1);
        scanf("%d %c", &students[i].number, &students[i].grade);
    }

    int numA = 0, numB = 0, numC = 0, numD = 0, numF = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].grade == 'A') {
            numA++;
        } else if (students[i].grade == 'B') {
            numB++;
        } else if (students[i].grade == 'C') {
            numC++;
        } else if (students[i].grade == 'D') {
            numD++;
        } else if (students[i].grade == 'F') {
            numF++;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d details:\n", i+1);
        printf("Number: %d\n", students[i].number);
        printf("Grade: %c\n", students[i].grade);
        printf("Total no. A: %d, B:%d, C:%d, D:%d, F:%d", numA, numB, numC, numD, numF);
    }

    return 0;
}

//output:

Enter No. Students: 1
Enter student 1 Number, Grade: 2001 A
Student 1 details:
Number: 2001
Grade: A
Total no. A: 1, B:0, C:0, D:0, F:0
