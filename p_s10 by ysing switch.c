#include<stdio.h>
int main()
{
    float a,b;
    char op;
    scanf("%f %c%f",&a,&op,&b);
    switch(op){
       case  '+' :
       printf("Addition:%.3f",a+b);
       break;
       case  '-' :
       printf("Subtraction:%.3f",a-b);
       break;
       case  '*' :
       printf("multiplication:%.3f",a+b);
       break;
       case  '/' :
           switch(b=0)
           case 1:printf("Zero as divisor is not valid!");
           break;
           case 0:
            printf("Addition:%.3f",a/b);
            break;
       break;
           default:
            printf("Invalid operator");


    }
    retrurn 0;
}
