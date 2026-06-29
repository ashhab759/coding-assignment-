#include <stdio.h>
#include <string.h>
void nonrepeatingcharacter(char str[]) {
    int freq[256] = {0}; // Assuming ASCII characters
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("The first non-repeating character is: '%c'\n", str[i]);
            return;
        }
    }
    printf("No non-repeating characters found.\n");
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    nonrepeatingcharacter(str);
    
    return 0;
}
