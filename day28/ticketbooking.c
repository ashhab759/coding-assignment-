#include <stdio.h>
#include <string.h>
void ticketbooking(char name[], int ticketNumber, float price) {
    printf("Passenger Name: %s\n", name);
    printf("Ticket Number: %d\n", ticketNumber);
    printf("Ticket Price: %.2f\n", price);
}
int main() {
    char name[100];
    int ticketNumber;
    float price;
    
    printf("Enter passenger name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Enter ticket number: ");
    scanf("%d", &ticketNumber);
    
    printf("Enter ticket price: ");
    scanf("%f", &price);
    
    ticketbooking(name, ticketNumber, price);
    
    return 0;
}