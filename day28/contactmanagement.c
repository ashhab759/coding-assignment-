#include <stdio.h>
#include <string.h>
void contactmanagement(char name[], char phone[]) {
    printf("Contact Name: %s\n", name);
    printf("Contact Phone: %s\n", phone);
}
int main() {
    char name[100];
    char phone[20];
    
    printf("Enter contact name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Enter contact phone number: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';
    
    contactmanagement(name, phone);
    
    return 0;
}