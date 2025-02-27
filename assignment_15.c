#include<stdio.h>
int main()
{
    int x,y,choice,Case;
    scanf("%d%d\n",&x,&y);
    scanf("%d",&choice);

    if(choice==1){
        printf("Addition:%d",x+y);
    }
    else if(choice==2){
        printf("Subtraction:%d",x-y);
    }
    else if(choice==3){
        printf("Multiplication:%d",x*y);
    }
    else if(choice==4){
        if(y!=0){
            printf("Enter another choice:");
            scanf("%d",&Case);
            if(Case==1){
                printf("quotient: %d",x/y);
            }
            else if(Case==2){
                printf("reminder: %d",x%y);
            }
        }
        else{
            printf("Error:divisor is zero");
        }
    }

    return 0;
}
