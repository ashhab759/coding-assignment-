#include <stdio.h>
#include <string.h>
void stringrotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return;
    }
    
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    
    if (strstr(temp, str2) != NULL) {
        printf("The strings are rotations of each other.\n");
    } else {
        printf("The strings are not rotations of each other.\n");
    }
}
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character if present

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character if present

    stringrotation(str1, str2);

    return 0;
}
