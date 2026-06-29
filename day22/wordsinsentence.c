#include <stdio.h>
#include <string.h>
void wordsinSentence(char str[]) {
    int wordCount = 0;
    int inWord = 0; // Flag to track if we are inside a word

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if (!inWord) {
                wordCount++;
                inWord = 1; // We are now inside a word
            }
        } else {
            inWord = 0; // We are outside a word
        }
    }

    printf("Number of words in the sentence: %d\n", wordCount);
}
int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    wordsinSentence(str);
    
    return 0;
}