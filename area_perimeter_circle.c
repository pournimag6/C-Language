//C Program to find area and perimeter of a circle.

#include<stdio.h>

int main(){
    float r, area, perimeter;
    float pi = 3.14;

    printf("Enter value for radius of circle : ");
    scanf("%f", &r);

    area = pi*r*r;
    perimeter = 2*pi*r;

    printf("Area of circle is : %f\n", area);
    printf("Perimeter of circle is : %f", perimeter);

    return 0;
}