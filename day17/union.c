#include <stdio.h>
void union_of_two_arrays(int arr1[], int n1, int arr2[], int n2, int union[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        union[k++] = arr1[i];
    }
    for (int j = 0; j < n2; j++) {
        int found = 0;
        for (int i = 0; i < n1; i++) {
            if (arr2[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            union[k++] = arr2[j];
        }
    }
} int main() {
    int n1, n2;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[100];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[100];
    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int union_arr[200];
    union_of_two_arrays(arr1, n1, arr2, n2, union_arr);
    
    printf("Union of the two arrays: ");
    for (int i = 0; i < n1 + n2 && union_arr[i] != 0; i++) {
        printf("%d ", union_arr[i]);
    }
    printf("\n");
    
    return 0;
}