#include <stdio.h>
void intersection1(int arr1[], int n1, int arr2[], int n2, int intersection[]) {
    int k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                intersection[k++] = arr1[i];
                break;
            }
        }
    }
}
int main() {
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
    
    int intersection[100];
    intersection1(arr1, n1, arr2, n2, intersection);
    
    printf("Intersection of the two arrays: ");
    for (int i = 0; i < n1 && intersection[i] != 0; i++) {
        printf("%d ", intersection[i]);
    }
    printf("\n");
    
    return 0;
}