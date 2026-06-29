#include <stdio.h>
#include <string.h>
void firstrepeatingcharacter(char str[]) {
    int freq[256] = {0}; // Assuming ASCII characters
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] == 2) {
            printf("The first repeating character is: '%c'\n", str[i]);
            return;
        }
    }
    printf("No repeating characters found.\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    firstrepeatingcharacter(str);
    
    return 0;
}
