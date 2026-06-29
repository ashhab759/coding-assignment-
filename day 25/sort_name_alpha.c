#include <stdio.h>
#include <string.h>
void sortalpha(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
  
    str[strcspn(str, "\n")] = '\0';
    
    sortalpha(str);
    
    printf("Sorted string in alphabetical order: %s\n", str);
    
    return 0;
}