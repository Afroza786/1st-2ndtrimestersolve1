#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:",age);
    scanf("%d",&age);
    if(age>=18)
        printf("you are eligible to vote");
    else
        printf("You are not eligible to vote");
        return 0;
}
