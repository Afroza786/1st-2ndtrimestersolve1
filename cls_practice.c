#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

//    // ***************************************
//    if(a>=b){
//        printf("a is greater than or equal to b\n");
//    }else{
//        printf("a is less than to b\n");
//    }
    // ***************************************

    switch(a>=b){
    case 1:
        printf("a is greater than or equal to b\n");
        break;
    case 0:
        printf("a is less than  b\n");
        break;
    }
    return 0;
}
