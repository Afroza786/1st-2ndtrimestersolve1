#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0){
        if((n&(n-1))==0)
            printf("yes");
        else
            printf("No");
    }
    else if(n==0){
        printf("Zero is not valid input");
    }
    else{
        printf("Negative input is not valid");
    }
    return 0;

}
