#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);

    if(x>y && x>z){
        printf("%d is greater number",x);
    }
    else if(y>z && y>x){
        printf("%d is greater number",y);
    }
    else{
        printf("%d is greater number",z);
    }
    return 0;
}
