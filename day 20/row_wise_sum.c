#include <stdio.h>
void rowWiseSum(int arr[100][100], int n, int m, int sum[100]) {
    for (int i = 0; i < n; i++) {
        sum[i] = 0;
        for (int j = 0; j < m; j++) {
            sum[i] += arr[i][j];
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
    
    rowWiseSum(arr, n, m, sum);
    
    printf("Row-wise sum of the matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("Sum of row %d: %d\n", i + 1, sum[i]);
    }
    
    return 0;
}