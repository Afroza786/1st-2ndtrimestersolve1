#include<stdio.h>
int main()
{

float a,b;
char op;
scanf("%f %c%f",&a,&op,&b);

if(op=='+'){
    printf("Addition:%.2f",a+b);
    }
else if(op=='-'){
    printf("subtraction:%.2f",a-b);
    }
else if(op=='*'){
    printf("Multiplication:%.2f",a*b);
    }
else if(op=='/'){
    if(b==0){
            printf("Division:Zero as divisor is not valid!");

            }
    else{
            printf("Division:%.2f",a/b);

         }

     }
else{printf("invalid operator");

    }
return 0;
}

