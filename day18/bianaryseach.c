#include <stdio.h>
void binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            printf("Element %d found at index %d\n", target, mid);
            return;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Element %d not found in the array\n", target);
}
int main() {
    int n, target;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements of the array (sorted order): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &target);
    
    binarySearch(arr, n, target);
    
    return 0;
}