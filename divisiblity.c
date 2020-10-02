// C program to check whether number passes a divisiblity test.

#include<stdio.h>

int main(){
    int number, A, B;

    printf("Enter a number : ");
    scanf("%d", &number);

    printf("Enter value for A : ");
    scanf("%d", &A);

    printf("Enter value for B : ");
    scanf("%d", &B);

    if((number%A)==0 && (number%B)==0){
        printf("Divisblity test passed.");
    }else
    {
        printf("Divisblity test failed.");
    }
    
    return 0;
}