//C Program to calculate temperature conversion from fahrenheit to celsius and vice versa.

#include<stdio.h>

int main(){
    float temperature, celsius, fahrenheit;

    printf("--------------------------------------------------------\n");
    printf("Enter your temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit - 32)*5/9;
    printf("Your temperature in celsius is : %f\n", celsius);

    printf("--------------------------------------------------------\n");

    printf("Enter your temperature in celsius : ");
    scanf("%f",&celsius);
    fahrenheit = (celsius*9/5)+32;
    printf("Your temperature in fahrenheit is : %f", fahrenheit);
    return 0;
    printf("--------------------------------------------------------\n");
}