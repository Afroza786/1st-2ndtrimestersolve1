#include<stdio.h>
int main(){

int x,a,b,c;
scanf("%d%d%d%d",&x,&a,&b,&c);
if(a==x){
    printf("player 2 wins");
}
else if(a!=x){
    printf("wrong,2chances left ");

}
 else if(b==x){
    printf("player 2 wins");}
else if(b!=x){
    printf("wrong,1chances left ");}
  else if(c==x){
    printf("player 2 wins");}
   else if(c==x){
    printf("wrong,0 chances left");

  }
  else{
    printf("Player-1 wins!");
  }
return 0;
}
