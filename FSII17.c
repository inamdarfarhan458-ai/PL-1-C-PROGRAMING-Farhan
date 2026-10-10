/*
Program (17) -> Write a program to accept elements of integer, float, and character arrays from the user
and display the value and corresponding memory address of each array element.

Solution (1) : Pre define values in the program + without any loop + Explicit way to write the program
*/

#include <stdio.h>
int main()
{
    int var1[5];
    float var2[5];
    char var3[5];

    var1[0] = 10;
    var1[1] = 20;
    var1[2] = 30;
    var1[3] = 40;
    var1[4] = 50;

    printf("\nThe value of var1 of index 0 is %d ",var1[0]);
    printf("and address is %d",&var1[0]);
    printf("\nThe value of var1 of index 1 is %d ",var1[1]);
    printf("and address is %d",&var1[1]);
    printf("\nThe value of var1 of index 2 is %d ",var1[2]);
    printf("and address is %d",&var1[2]);
    printf("\nThe value of var1 of index 3 is %d ",var1[3]);
    printf("and address is %d",&var1[3]);
    printf("\nThe value of var1 of index 4 is %d ",var1[4]);
    printf("and address is %d\n\n",&var1[4]);

    var2[0] = 1.1;
    

