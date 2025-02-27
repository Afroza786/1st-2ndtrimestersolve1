#include<stdio.h>
#define pi 3.1416
int main()
{
    int r;
    float area;
    printf("Enter the radius of circle:",r);
    scanf("%d",&r);
    area= (float)pi*r*r;
    printf("area of circle=%f",area);
    return 0;
}
