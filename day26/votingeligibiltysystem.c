#include <stdio.h>
#include <string.h>
void votingeligibilitysystem(int age) {
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
}
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    votingeligibilitysystem(age);
    
    return 0;
}