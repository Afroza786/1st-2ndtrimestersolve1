#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float b;
    scanf("%f",&b);
    char c;
    scanf(" %c",&c);
    printf("The integer value = %d\n",a);
    printf("The floating value=%.5f\n",b);
    printf("The character value= %c \n",c);
    return 0;
}
