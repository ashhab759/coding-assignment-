#include <stdio.h>
void columnWiseSum(int arr[100][100], int n, int m, int sum[100]) {
    for (int j = 0; j < m; j++) {
        sum[j] = 0;
        for (int i = 0; i < n; i++) {
            sum[j] += arr[i][j];
        }
    }
}
int main() {
    int n, m;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    int arr[100][100], sum[100];
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    columnWiseSum(arr, n, m, sum);
    
    printf("Column-wise sum of the matrix:\n");
    for (int j = 0; j < m; j++) {
        printf("Sum of column %d: %d\n", j + 1, sum[j]);
    }
    
    return 0;
}