/*program(7)-Write a c program to swap two numbers using a temprory varible 
solution(1)-pre defined value/*

#include<stdio.h>
int main()
{
    int a, b, temp;

    a=111;
    b=222;
    printf("\n Before swapping : ");
    printf("\n a = %d,b = %d\n", a,b);

    temp = a;
    a = b;
    b = temp;

    printf("\n After Swapping:");
    printf("\n a = %d,b = %d\n , a , b)");

    return 0;
    
}
