#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x=a-b/3+c*2-1;
    y=a-(b/(3+c)*2)-1;
    z=a-((b/3)+c*2)-1;
    printf("x=%d\ny=%d\nz=%d",x,y,z);
    return 0;
}
