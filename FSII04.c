\*Program(4) - Program to calculate the area of a circle 
solution(2) - user defined value*\

#include<stdio.h>

int main()
{
    float radius , area ;
    printf("\n Enter the radius of circle;");
    scanf("%f" , &radius);
    
    
    area = (3.14*radius*radius);
    printf("\n Area of circle = %f" , area);
    return 0;
}
