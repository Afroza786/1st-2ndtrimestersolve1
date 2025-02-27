#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of x and y",x,y);
    scanf("%d%d",&x,&y);
    if((x>0)&&(y>0)){
        printf("%d and %d in first quadrant",x,y);
    }
    else if((x<0)&&(y>0)){
        printf("%d and %d in second quadrant",x,y);
    }
    else if((x<0)&&(y<0)){
        printf("%d and %d in third quadrant",x,y);
    }
     else{
        printf("%d and %d in fourth quadrant",x,y);
     }
    return 0;


}
