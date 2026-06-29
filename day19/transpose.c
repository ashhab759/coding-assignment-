#include <stdio.h>
int diagonalSum(int arr[100][100], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][i]; // Primary diagonal
        if (i != n - 1 - i) { // Avoid double counting the center element in odd-sized matrices
            sum += arr[i][n - 1 - i]; // Secondary diagonal
        }
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int arr[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sum = diagonalSum(arr, n);
    printf("The sum of the diagonals is: %d\n", sum);
    
    return 0;
}