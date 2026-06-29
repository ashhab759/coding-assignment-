#include <stdio.h>
#include <string.h> 
void longestword(char str[]) {
    int maxLength = 0;
    char longest[100] = ""; // Assuming the longest word won't exceed 100 characters
    char current[100] = "";
    int currentLength = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            current[currentLength++] = str[i];
        } else {
            current[currentLength] = '\0'; // Null-terminate the current word
            if (currentLength > maxLength) {
                maxLength = currentLength;
                strcpy(longest, current);
            }
            currentLength = 0; // Reset for the next word
        }
    }
    // Check the last word in case the string doesn't end with a space
    current[currentLength] = '\0';
    if (currentLength > maxLength) {
        strcpy(longest, current);
    }

    printf("The longest word is: %s\n", longest);
}
int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    longestword(str);
    
    return 0;
}
