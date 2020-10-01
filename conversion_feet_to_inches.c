//C program to covert feet into inches.

#include<stdio.h>

int main(){
    int feet, inch, result;
    printf("Enter you height in feet : ");
    scanf("%d", &feet);

    result = 12*feet;
    printf("Result : %d", result);

    return 0;
}