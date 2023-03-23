#include<stdio.h>
#include<string.h>

struct student{
char name[50];
int marks[4];
float total;
float aggregate;
char grade[20];
} s[10];

int main(){
int n,i,j;
printf("Enter the number of students: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Enter the name of student %d: ",i+1);
    scanf("%s",s[i].name);
    s[i].total=0;
    for(j=0;j<4;j++){
        printf("Enter the marks of subject %d for student %d: ",j+1,i+1);
        scanf("%d",&s[i].marks[j]);
        s[i].total=s[i].total+s[i].marks[j];
    }
    s[i].aggregate=(s[i].total/400)*100;
    
    if(s[i].aggregate>=75){
        strcpy(s[i].grade,"Distinction");
    }
    else if(s[i].aggregate>=60 && s[i].aggregate<75){
        strcpy(s[i].grade,"First Division");
    }
    else if(s[i].aggregate>=50 && s[i].aggregate<60){
        strcpy(s[i].grade,"Second Division");
    }
    else if(s[i].aggregate>=40 && s[i].aggregate<50){
        strcpy(s[i].grade,"Third Division");
    }
    else{
        strcpy(s[i].grade,"Fail");
    }
}

printf("\n\n");
printf("Name\tTotal\tAggregate\tGrade\n");
for(i=0;i<n;i++){
    printf("%s\t%.2f\t%.2f\t\t%s\n",s[i].name,s[i].total,s[i].aggregate,s[i].grade);
}
return 0;
}


