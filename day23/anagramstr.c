#include <stdio.h>
#include <string.h>
void anagrams(char str1[], char str2[]) {
    int freq[256] = {0}; // Assuming ASCII characters
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("The strings are not anagrams.\n");
            return;
        }
    }
    printf("The strings are anagrams.\n");
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character if present

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character if present

    anagrams(str1, str2);

    return 0;
}
