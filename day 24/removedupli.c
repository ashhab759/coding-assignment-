#include <stdio.h>
#include <string.h>
void removeduplicates(int arr[], int n) {
    int arr1[100] = {0};
    for (int i = 0; i < n; i++) {
        arr1[arr[i]] = 1; // Mark the presence of the element
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < 100; i++) {
        if (arr1[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    removeduplicates(arr, n);
    return 0;
}
