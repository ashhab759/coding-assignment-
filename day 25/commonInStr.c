#include <stdio.h>
#include <string.h>
void commonInStr(char str1[], char str2[]) {
    int freq[256] = {0}; // Assuming ASCII characters
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }
    printf("Common characters in the two strings: ");
    for (int i = 0; str2[i] != '\0'; i++) {
        if (freq[(unsigned char)str2[i]] > 0) {
            printf("%c ", str2[i]);
            freq[(unsigned char)str2[i]] = 0; // Avoid printing duplicates
        }
    }
    printf("\n");
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character if present

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character if present

    commonInStr(str1, str2);

    return 0;
}