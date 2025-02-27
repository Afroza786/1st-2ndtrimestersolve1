#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    char dev_a,dev_b,dev_c;
    printf("Enter rating and productivity score of developer 1:");
    scanf("%c%f",dev_a,a);
    getchar();
    printf("Enter rating and productivity score of developer 2:");
    scanf("%c%f",dev_b,b);
    getchar();
    printf("Enter rating and productivity score of developer 3:");
    scanf("%c%f",dev_c,c);
    printf("developer 1:Rating = %c,productivity score = %.2f\n",dev_a,a);
    printf("developer 2:Rating = %c,productivity score = %.2f\n",dev_b,b);
    printf("developer 1:Rating = %c,productivity score = %.2f\n",dev_c,c);
    printf("The average productivity score is :%.2f\n\n",(a+b+c)/3);
    printf("Increased Productivity of developer 2: %.2f\n", 1.1*b);


    return 0;


}


