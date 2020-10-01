//C Program that performs basic Arithemtic operations using functions.

#include<stdio.h>

int add();
int sub();
int mul();
int div();

int main(){
    int num1, num2, Addition, subtraction, Multiplication, Division;
    printf("Enter the value of num1 : \n", num1);
    scanf("%d", &num1);

    printf("Enter the value of num2 : \n", num2);
    scanf("%d", &num2);

    add(num1, num2);
    sub(num1, num2);
    mul(num1, num2);
    div(num1, num2);
    return 0;
}

int add(int num1, int num2){
    int Addition;
    Addition = num1 + num2;
    printf("Addition is = %d\n", Addition);
}

int sub(int num1, int num2){
    int subtraction;
    subtraction = num1 - num2;
    printf("subtraction is = %d\n", subtraction);
}

int mul(int num1, int num2){
    int Multiplication;
    Multiplication = num1 * num2;
    printf("Multiplication is = %d\n", Multiplication);
}

int div(int num1, int num2){
    int Division;
    Division = num1 / num2;
    printf("Division is = %d\n", Division);
}