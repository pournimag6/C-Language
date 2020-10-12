//C Program to create Calculator using switchcase.

#include<stdio.h>

int main(){
    int num1, num2;
    char ch;
    float result;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&ch);

    result = 0;
    switch(ch)
    {
        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = (float)num1/(float)num2;
            break;

        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '%':
            result = num1%num2;
            break;
        default:
           printf("Invalid case.\n"); 
    }
    printf("Result is %d %c %d = %f \n", num1, ch, num2, result);
    return 0;
}