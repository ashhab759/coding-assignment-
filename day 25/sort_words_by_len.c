#include <stdio.h>
#include <string.h>
void sortbylen(char str[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(str[j]) > strlen(str[j + 1])) {
                char temp[100];
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
}
int main() {
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);
    char str[n][100];
    printf("Enter words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    
    sortbylen(str, n);
    
    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    
    return 0;
}