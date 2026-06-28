#include <stdio.h>
void max_freq(int arr[] , int n ){
    int arr1[100] = {0};
    int max =0 ;
    for (int i =0 ; i< n; i++){
        arr1[arr[i]] =  arr1[arr[i]] + 1 ;
        
    }
    for (int i =0 ; i < n ; i++){
        if (max<arr1[i]){
            max=arr1[i];
        }else {
            continue;
        }
        
    } printf(" the max frequency number is %d", max);
    
    
    
    
}


  int main()
{ int n;
printf("enter a number : ");
scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
   printf("enter an element :");
   scanf("%d",&arr[i]);}
   max_freq(arr,n);
    return 0;

}