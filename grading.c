#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>=90){
        printf("grade=A");
    }
    else if(marks>=80){
        printf("grade=B");
    }
    else if(marks>=70){
        printf("grade=D");
    }
    else{
        printf("grade=F");
    }
    return 0;

}
