#include <stdio.h>
void multiplymatrices(int arr1[100][100], int arr2[100][100], int n, int m, int p, int result[100][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}
int main() {
    int n, m, p;
    printf("Enter number of rows and columns of the first matrix: ");
    scanf("%d %d", &n, &m);
    int arr1[100][100];
    
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    
    printf("Enter number of columns of the second matrix: ");
    scanf("%d", &p);
    int arr2[100][100];
    
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }
    
    int result[100][100];
    multiplymatrices(arr1, arr2, n, m, p, result);
    
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
