#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    printf("Enter three value:");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (d<0){
        printf("Error");
    }
    else if (d==0){
        int e;
        e = -b*b/4*a*c;
        printf("The value of square root=%d",e);
    }
    else if(d>0){
        int x1,x2;
        x1=(-b+sqrt(d))/2*a;
        printf("The value of sqare root for(+):%d \n",x1);
        x2=(-b+sqrt(d))/2*a;
        printf("The value of sqare root for(+):%d \n",x2);
    }
    else{
        printf("Invalid input");
    }
    return 0;
   
}