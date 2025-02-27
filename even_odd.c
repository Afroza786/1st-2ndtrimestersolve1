#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    rem=num%2;
    if(rem==0)
        printf("even");
    else
        printf("odd");
    return 0;
}
