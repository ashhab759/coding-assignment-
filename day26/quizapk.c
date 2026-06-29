#include <stdio.h>
#include <string.h>
void quizapk(char str[]) {
    int length = strlen(str);
    int count = 1;
    char compressed[200] = ""; // Assuming the compressed string won't exceed 200 characters
    for (int i = 0; i < length; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            char buffer[10];
            sprintf(buffer, "%c%d", str[i], count);
            strcat(compressed, buffer);
            count = 1;
        }
    }
    printf("Compressed string: %s\n", compressed);
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';
    
    quizapk(str);
    
    return 0;
}