/*program(8)- Write a program to swap two numbers using a temprory variable
solutiom(2)- user defined value
#include<stdio.h>
int main()
{
    int a, b, temp;

    
    
    printf("\n Enter the first Number: ");
    scanf("%d" , &a);
    printf("\n Enter the seconf number:" );
    scanf("%d" ,&b);


    temp = a;
    a = b;
    b = temp;

    printf("\n After Swapping:\n");
    printf("\n first number = %d\n" , a);
    printf("\n second number = %d\n" , b);

    return 0;
    
}
