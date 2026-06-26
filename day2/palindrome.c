int main()
{
int n , rev=0 , lev; 
printf("enter the number :");
scanf("%d",&n);
while(n>0){
     lev=n%10;
   rev=rev*10+lev;
   
    n=n/10;
   
} 
if(n==rev){
    printf("the number is palindrome");}
    else{

printf("the number is not palindrome");}
    



    return 0;
}