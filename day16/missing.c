#include <stdio.h>
void miss_num(int arr[], int n ){
    int Asum=0;
    int tsum=(n*(n+1))/2;
    for(int i =0 ; i<n;i++){
        Asum=Asum+arr[i];
    } if (Asum>tsum){
         printf("the missing number is %d",Asum-tsum);
        
    }else{
        
    
    printf("the missing number is %d",tsum-Asum);}
    
    
    
}

int main()
{ int n;
printf("enter a number ");
scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
   printf("enter an element :");
   scanf("%d",&arr[i]);}
   miss_num(arr,n);
    return 0;
}