#include<stdio.h>
int main() {

printf("*****************************************\n");
printf("*\t Operations Manager Tools \t*\n");
printf("*\t\t\t\t\t*\n");
printf("*\t 1.Add \t\t\t\t*\n");
printf("*\t 2.Subtract\t\t\t*\n");
printf("*\t 3.Multiply\t\t\t*\n");
printf("*\t 4.Divide\t\t\t*\n");
printf("*\t 5.Modulus\t\t\t*\n");
printf("*\t 6.Exit\t\t\t\t*\n");
printf("*\t\t\t\t\t*\n");
printf("*****************************************\n");
printf("select an option(1-6):");
int choice;
scanf("%d",&choice);
float num1,num2,result;

switch(choice){
    case 1:

        printf("Enter the first number :",num1);
        scanf("%f",&num1);
        printf("Enter the second number:",num2);
        scanf("%f",&num2);
        result=num1+num2;
        printf("The result is :%.2f",result);
    break;
    case 2:
        printf("Enter the first number :",num1);
        scanf("%f",&num1);
        printf("Enter the second number:",num2);
        scanf("%f",&num2);
        result=num1-num2;
        printf("The result is :%.2f",result);
    break;
    case 3:

        printf("Enter the first number :",num1);
        scanf("%f",&num1);
        printf("Enter the second number:",num2);
        scanf("%f",&num2);
        result=num1*num2;
        printf("The result is :%.2f",result);
    break;
    case 4:

        printf("Enter the first number :",num1);
        scanf("%f",&num1);
        printf("Enter the second number:",num2);
        scanf("%f",&num2);
        if(num2==0){
            printf("Division by zero is not allowed");
        }
        else{
        result=num1/num2;
        printf("The result is :%.2f",result);
        }
    break;
    case 5:

        printf("Enter the first number :",num1);
        scanf("%f",&num1);
        printf("Enter the second number:",num2);
        scanf("%f",&num2);
        if((int)num2!=0){
                int result;
            result=(int)num1%(int)num2;
            printf("The result of %d %% %d from(%.2f %% %.2f) :%d",(int)num1,(int)num2,num1,num2,result);
        }
        else{

            printf("Modulus by zero is not allowed");
        }
    break;
    case 6:
        printf("Existing the program . Good bye!");
    break;
    default:
        printf("Invalid selection.Please restart the program and select a valid option");
    break;
}

return 0;
}

