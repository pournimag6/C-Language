//C program to write switchcase to check whether a number is EVEN or ODD.

#include<stdio.h>

int main(){
    int number, result;

    printf("Enter a number : ");
    scanf("%d", &number);

    switch(number%2)
    {
        case 0:
            printf("Number is EVEN", number);
            break;
        case 1:
            printf("Number is ODD", number);
            break;
    }
    return 0;
}