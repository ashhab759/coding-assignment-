#include <stdio.h>
#include <string.h>
void AtmSimul() {
    int pin = 1234;
    int enteredPin;
    int balance = 1000;
    int choice;
    int amount;

    printf("Welcome to the ATM Simulator!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access denied.\n");
        return;
    }

    do {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%d\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("$%d deposited successfully. New balance: $%d\n", amount, balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("$%d withdrawn successfully. New balance: $%d\n", amount, balance);
                } else {
                    printf("Invalid withdrawal amount or insufficient funds.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM Simulator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
} 
int main() {
    AtmSimul();
    return 0;
}