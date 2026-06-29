#include <stdio.h>
void symmetric(int arr[100][100], int n, int m) {
    if (n != m) {
        printf("The matrix is not square, hence cannot be symmetric.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] != arr[j][i]) {
                printf("The matrix is not symmetric.\n");
                return;
            }
        }
    }
    printf("The matrix is symmetric.\n");
}
int main() {
    int n, m;
    printf("Enter number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    int arr[100][100];
    
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    symmetric(arr, n, m);
    
    return 0;
}