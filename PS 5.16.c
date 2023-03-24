#include <stdio.h>

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (int i = 0; i < num_students; i++) {
        printf("Enter details for student %d:\n", i+1);
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                char name[50];
                printf("Enter name: ");
                scanf("%s", name);
                printf("Name: %s\n", name);
            } else if (j == 1) {
                int age;
                printf("Enter age: ");
                scanf("%d", &age);
                printf("Age: %d\n", age);
            } else {
                int roll_no;
                printf("Enter roll number: ");
                scanf("%d", &roll_no);
                printf("Roll Number: %d\n", roll_no);
            }
        }
    }
    return 0;
}


Output:
Enter the number of students: 2
Enter details for student 1:
Enter name: msv
Name: msv
Enter age: 18
Age: 18
Enter roll number: 21
Roll Number: 21

Enter details for student 2:
Enter name: Sarah
Name: Sarah
Enter age: 19
Age: 19
Enter roll number: 12
Roll Number: 12
