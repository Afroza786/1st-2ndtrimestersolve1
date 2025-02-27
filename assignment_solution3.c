#include <stdio.h>

int main(){

    int x,c1,c2,c3;

       scanf("%d%d%d%d", &x, &c1, &c2, &c3);

       if (c1 == x) {
           printf("Right, Player-2 wins!\n");
       } else {
           printf("Wrong, 2 Chance(s) Left!\n");

           if (c2 == x) {
               printf("Right, Player-2 wins!\n");
           } else {
               printf("Wrong, 1 Chance(s) Left!\n");

               if (c3 == x) {
                   printf("Right, Player-2 wins!\n");
               } else {
                   printf("Wrong, 0 Chance(s) Left!\n");
                   printf("Player-1 wins!\n");
               }
           }
       }

    return 0;
}
