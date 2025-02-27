#include<stdio.h>

int main()
{
    int width,length,path,a,ga;
    printf("Enter the width of the garden =",width);
    scanf("%d",&width);
    printf("Enter the length of the garden=",length);
    scanf("%d",&length);
    printf("Enter the road path=",path);
    scanf("%d",&path);
    a=width*length;
    ga=((length+2+2)*(width+2+2));
    printf("The area of garden is =%d\nThe area of covered by road =%d",a,ga);


    return 0;
}
