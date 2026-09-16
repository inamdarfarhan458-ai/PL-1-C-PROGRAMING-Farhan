//Program(11) - Write  PROGRAM to check wheather a given number is even or odd

#include<stdio.h>
int main()
{
    int num;
    printf("Enter your number:");
    scanf("%d" , &num);

    if (num%2 == 0)
    {
        printf("the number is even ,");
    }
    else
    {
        printf(" The nnumber is odd ,"); 
    }
    return 0;
    }    
    

