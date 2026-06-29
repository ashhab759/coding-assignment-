
#include <stdio.h>
#include <string.h>
void countVowelsAndConsonants(char str[], int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
    }
}
 int main() {
    char str[100];
    int vowelCount, consonantCount;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    countVowelsAndConsonants(str, &vowelCount, &consonantCount);
    
    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);
    
    return 0;
    