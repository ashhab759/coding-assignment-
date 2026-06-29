#include <stdio.h>
#include <string.h>
void employeerecord(char name[], int id, float salary) {
    printf("Employee Name: %s\n", name);
    printf("Employee ID: %d\n", id);
    printf("Employee Salary: %.2f\n", salary);
}
int main() {
    char name[100];
    int id;
    float salary;
    
    printf("Enter employee name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Enter employee ID: ");
    scanf("%d", &id);
    
    printf("Enter employee salary: ");
    scanf("%f", &salary);
    
    employeerecord(name, id, salary);
    
    return 0;
}
