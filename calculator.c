#include<stdio.h>
int main(){
    int num1,num2;
    char ch;
    printf("Enter your first number");
    scanf("%d",&num1);
    printf("enter your secound number");
    scanf("%d",&num2);
    printf("What do you want to do(+,_,*,/,%%) : ");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+' :
             printf("sum=%d",num1+num2);
             break;
    case '-':
            printf("sub=%d",num1-num2);
            break;
    case '*':
            printf("mul=%d",num1*num2);
            break;
    case '/':
            printf("div=%d",num1/num2);
            break;
    case '%':
            printf("rem=%d",num1%num2);
            break;        
    default:
            printf("Invalid input");
            break;
    }
    return 0;
}