
#include<stdio.h>
int main()
{
    int num,guess1,guess2,guess3;

    printf("player 1,pick a number \n");
    scanf("%d",&num);
    printf("Player 2,Enter your 1st guess ");
    scanf("%d",&guess1);
    if(num==guess1){
        printf("Right,player-2 wins!\n");
        flag=1;
    }
    else{
        printf("wrong,2 chance(s)Left!\n");
    }
    if(flag==0){
    printf("player 2,Enter the second guess:\n");
    scanf("%d",&guess2);
    if(guess2==num){
        printf("Right,player-2 wins!\n");
        flag=1;
    }
    else{
         printf("wrong,1 chance(s)Left!\n");
    }

    }
    if(flag==0){
      printf("player 2,Enter the third guess:");
      scanf("%d",&guess3);
      if(guess3==num){
        printf("Right,player-2 wins!\n");
        flag=1;
      }
      else{
        printf("wrong,0 chance(s)Left!");
      }
    }
    if(flag==0){
        printf("player 1,wins!\n");
    }
    return 0;


}
