#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=n&n-1;
    if(x==0)
        printf("yes");
    else
        printf("no");
    return 0;
}
