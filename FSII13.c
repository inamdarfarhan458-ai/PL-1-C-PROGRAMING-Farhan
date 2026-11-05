//program(13) - write a program using the switcch case statement tp creat a menu driven calculator that repeatedly perform arithmetic operations until the user exit the program

#include<stdio.h>
int main()
{
    int choice;
    float num1,num2,result;

    do
        {
            printf("\n===== MENU DRIVEN CALCULATOR =====\n");
            printf("1. Addition\n");
            printf("2. substraction\n");
            printf("3. Multiplication\n");
            printf("4. Division\n");
            printf("5. Exit\n");
            printf(" Enter you choice:");
            scanf("%d", &choice);

            switch(choice)
                {
                    case1:
                    printf("Enter two numbers:");
                    scanf("%f%f" , &num1 , &num2);
                    result = num1 + num2;
                    printf(" Result =%2f\n" , result);
                    break;

                    case2:
                    printf(" Enter two numbers:");
                    scanf(" %f%f", &num1, &num2);
                    result = num1-num2;
                    printf("Result = %2f\n" , result);
                    break;

                    case3:
                    printf(" Enter two numbers:");
                    scanf("%f%f" , &num1,&num2);
                    result = num1*num2;
printf("Result = %2f\n", result);
break;

case4:
printf("Enter two numbers:");
scanf("%f%f" , &num1,&num2);

if(num2!=0)
printf("Result = %2f\n" , num1/num2);

else
printf("Error! Division by zero is not allowed:\n");
break;

case5:
printf("Exiting calculator...\n");
break;

default:
printf("Invalid choice! please try again.\n");
}
}while(choice!=5);

return 0;

                }
        

