#include <stdio.h>
#include <string.h>
void librarysystem(char title[], char author[], int year) {
    printf("Book Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("Publication Year: %d\n", year);
}
int main() {
    char title[100];
    char author[100];
    int year;
    
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    title[strcspn(title, "\n")] = '\0';
    
    printf("Enter author name: ");
    fgets(author, sizeof(author), stdin);
    author[strcspn(author, "\n")] = '\0';
    
    printf("Enter publication year: ");
    scanf("%d", &year);
    
    librarysystem(title, author, year);
    
    return 0;
}