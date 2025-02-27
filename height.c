#include<stdio.h>
int main(){
    int num;
    printf("Enter your height in (cm):");
    scanf("%d",&num);
    if(num<150){
        printf("Dwarf");
    }
    else if(num=150){
        printf("Average height");
    }
    else if (num>=165){
        printf("Tall");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}