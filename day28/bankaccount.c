#include <stdio.h>
#include <string.h>
void bankaccount(char name[], int accountNumber, float balance) {
    printf("Account Holder Name: %s\n", name);
    printf("Account Number: %d\n", accountNumber);
    printf("Account Balance: %.2f\n", balance);
}
int main() {
    char name[100];
    int accountNumber;
    float balance;
    
    printf("Enter account holder name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Enter account number: ");
    scanf("%d", &accountNumber);
    
    printf("Enter account balance: ");
    scanf("%f", &balance);
    
    bankaccount(name, accountNumber, balance);
    
    return 0;
}