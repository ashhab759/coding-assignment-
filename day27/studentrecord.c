#include <stdio.h>
#include <string.h>
void studentrecord(char name[], int rollno, float marks) {
    printf("Student Name: %s\n", name);
    printf("Roll Number: %d\n", rollno);
    printf("Marks: %.2f\n", marks);
}
int main() {
    char name[100];
    int rollno;
    float marks;
    
    printf("Enter student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Enter roll number: ");
    scanf("%d", &rollno);
    
    printf("Enter marks: ");
    scanf("%f", &marks);
    
    studentrecord(name, rollno, marks);
    
    return 0;
}