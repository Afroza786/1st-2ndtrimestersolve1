#include<stdio.h>

int main(){

int i,n,fact=1;
printf("Enter the number :");
scanf("%d",&n);

for(i=n;i>=1;i--){
    fact*=i;
}
printf("The factorial value of %d is %d \n" , n , fact);

return 0;
}
