#include <stdio.h>
void pair_sum(int arr[], int n ,int sum ){
    int count = 0;
    for ( int i = 0 ; i < n ; i++){
        for ( int j = i+1 ;i < n ; i++ ){
            if ( arr[i]+arr[j]==sum ){
                printf("the required pair are %d , %d\n " ,arr[i],arr[j]);
                count++;
                
            }else{
                continue;
            }
            }
        }
     if (count == 0){
        printf("no such pair found");
    }
    
}
    
    
    



  int main()
{ int n , sum ;
printf("enter a number of element : ");
scanf("%d",&n);
printf("enter a sum : ");
scanf("%d",&sum);
   int arr[n];
   for(int i=0;i<n;i++){
   printf("enter an element :");
   scanf("%d",&arr[i]);}
   pair_sum(arr,n ,sum);
    return 0;

}