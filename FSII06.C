/*Program(6) - Write a prigram to calculate the avarage of three numbers
solution(2)-user defined values/*

#include<stdio.h>
int main()
{
    int num1, num2, num3 ,total;
    float avarage;

    printf("Enter first number;");
    scanf("%d" , &num1);
    printf("Enter secind number;");
    scanf("%d" ,&num2 );
    printf("Enter third number;");
    scanf("%d" , &num3);
     total = (num1+num2+num3);
     
    avarage = total/3;
    printf("\n Average = %f" , avarage);
    return 0;
}
