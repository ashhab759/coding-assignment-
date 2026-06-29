#include <stdio.h>
#include <string.h>
void maxoccur(char str[]) {
    int freq[256] = {0}; // Assuming ASCII characters
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    int maxFreq = 0;
    char maxChar;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    printf("The character that occurs the most is: '%c' with %d occurrences.\n", maxChar, maxFreq);
}