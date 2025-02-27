#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:",num);
    scanf("%d",&num);
    if(num==0)
        printf("the number is zero",num);
    else if(num>0)
        printf("the number is positive",num);
    else
        printf("the number is negetive",num);
    return 0;
}
