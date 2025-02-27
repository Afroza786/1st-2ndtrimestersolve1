#include<stdio.h>
int main()
{
    char x;
    int a,b;
    scanf("%c %d%d",&x,&a,&b);
    if(x=='+'){
        printf("The addition value is:%d\n",a+b);
    }
    else if(x=='-'){
        printf("The subtraction value is :%d\n",a-b);
    }
    else if(x=='*'){
        printf("The multiplication is :%d\n",a*b);
    }
    else if(x=='/'){
            if(b!=0){
        printf("The division is :%d\n",a/b);
        }
        else {
            printf("error\n");
        }
    }
    return 0;

}
