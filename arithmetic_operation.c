//C Program that performs basic Arithemtic operations.

#include<stdio.h>

int main(){
    int num1, num2, Addition, subtraction, Multiplication, Division;
    printf("Enter the value of num1 : \n", num1);
    scanf("%d", &num1);

    printf("Enter the value of num2 : \n", num2);
    scanf("%d", &num2);

    Addition = num1 + num2;
    subtraction = num1 - num2;
    Multiplication = num1 * num2;
    Division = num1 / num2; 

    printf("Result of Arithmetic Operations are : \nAddition is : %d\nsubtraction is : %d\nMultiplication is : %d\nDivision is : %d\n", Addition, subtraction, Multiplication, Division);

    return 0;
}