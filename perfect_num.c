#include<stdio.h>

int main(){

int num,sum=0,i;
printf("Enter the number");
scanf("%d",num);
for(i=1;i<num;i++){

    if(num%i==0){

             sum=sum+i;

        printf("The divisor is : %d ",i);

    }
}

if(sum==0){
    pritf("Perfect number");
}
else {
    printf("Not perfect number");
}

return 0;
}
