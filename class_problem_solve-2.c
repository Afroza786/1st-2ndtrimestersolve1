#include<stdio.h>
int main()
{
    float a,b,c;
    char dev_a, dev_b, dev_c;
    printf("Enter Rating and Productivity of developer 1: ");
    scanf("%c%f",&dev_a, &a);
    getchar();
    printf("Enter Rating and Productivity of developer 2: ");
    scanf("%c%f",&dev_b, &b);
    getchar();
    printf("Enter Rating and Productivity of developer 3: ");
    scanf("%c%f",&dev_c, &c);

    printf("Developer 1: Rating %c, Productivity= %.2f\n", dev_a, a);
    printf("Developer 1: Rating %c, Productivity= %.2f\n", dev_b, b);
    printf("Developer 1: Rating %c, Productivity= %.2f\n", dev_c, c);

    printf("Average Productivity: %.2f\n\n", (a+b+c)/3);
    printf("Increased Productivity of developer 2: %.2f\n"), 1.1*b;
    return 0;
}
