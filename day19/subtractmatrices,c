#include <stdio.h>
void subtractmatrices(int arr1[100][100], int arr2[100][100], int n, int m, int diff[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}
int main() {
    int n, m;
    printf("Enter number of rows and columns of the matrices: ");
    scanf("%d %d", &n, &m);
    int arr1[100][100], arr2[100][100], diff[100][100];
    
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    subtractmatrices(arr1, arr2, n, m, diff);
    
    printf("Difference of the two matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}