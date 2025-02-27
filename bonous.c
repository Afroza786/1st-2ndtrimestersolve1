#include<stdio.h>
#include<math.h>
int main() {

printf("*****************************************\n");
printf("*\t Operations Manager Tools \t*\n");
printf("*\t\t\t\t\t*\n");
printf("*\t 1.Add \t\t\t\t*\n");
printf("*\t 2.Subtract\t\t\t*\n");
printf("*\t 3.Multiply\t\t\t*\n");
printf("*\t 4.Divide\t\t\t*\n");
printf("*\t 5.Modulus\t\t\t*\n");
printf("*\t 6.Absolute Difference\t\t*\n");
printf("*\t 7.Square Root Calculation\t*\n");
printf("*\t 8.Distance Calculation\t\t*\n");
printf("*\t 9.Exit\t\t\t\t*\n");
printf("*\t\t\t\t\t*\n");
printf("*****************************************\n");
printf("select an option(1-9):");
int choice;
scanf("%d",&choice);
float num1,num2,result;
int x1,x2,y1,y2;
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
    case 6:{

        printf("Enter the first number :",num1);
        scanf("%f",&num1);
        printf("Enter the second number:",num2);
        scanf("%f",&num2);
        result=(-num1)-(-num2);
        printf("The absolute difference is :%.2f",result);
          }
    break;
    case 7:

        printf("Enter a non-negative number :",num1);
        scanf("%f",&num1);
        result=sqrt(num1);
        printf("The result is :%.2f",result);
    break;
   case 8:

        printf("Enter the coordinates\n");
        printf("x1 --> %f\n",x1);
        scanf("%x",&x1);
        printf("x2 --> %d",x2);
        scanf("%d",y1);
        printf("y1 --> %d",y1);
        scanf("%d",&y2);
        printf("y2-->%d",y2);
        result=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        printf("The distance between the points is:%.2f",result);
    case 9:
        printf("Existing the program . Good bye!");
    break;
    default:
        printf("Invalid selection.Please restart the program and select a valid option");
    break;
}

return 0;
}


