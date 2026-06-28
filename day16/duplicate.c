#include <stdio.h>
void duplicate(int arr[], int n ){
    int arr1[100] = {0};
    for (int i =0 ; i< n; i++){
        arr1[arr[i]] =  arr1[arr[i]] + 1 ;
        
    }
    for (int i =0 ; i < n ; i++){
        if (arr1[arr[i]]>1){
            printf("the duplicate number is %d\n",arr[i]);
            arr1[arr[i]]=0;
        }else {
            continue;
        }
        
    } 
    
    
}
int main()
{ int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    duplicate(arr, n);
    return 0;
}
