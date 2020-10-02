//C program to calculate area and perimeter of a Rectangle.

#include<stdio.h>

int main(){
    float length, breadth, area, perimeter;

    printf("Enter value for length : ");
    scanf("%f", &length);

    printf("Enter value for breadth : ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2*(length + breadth);

    printf("Area of rectangle is : %f\n", area);
    printf("Perimeter of circle is : %f", perimeter);

    return 0;
}