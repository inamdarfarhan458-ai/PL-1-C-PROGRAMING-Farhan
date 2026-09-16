\*Program(2) - Write a program to make use of basic input/output functions using different data type
solution(2) - user defined value*/

#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter student Roll number;");
    scanf("%d" , &rollnum);
    printf("\n Enter Student percentage;");
    scanf("%f", &per);
    printf("\n Enter student Grade;");
    scanf("%c" , &grade);

    printf("\n Student Information\n");
    printf("\n Percentage is;%d" , rollnum);
    printf("\n percentage is; %f" , per);
    printf("\n Grade : %c" , grade);

    return 0;
}

