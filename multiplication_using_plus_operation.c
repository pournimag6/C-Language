// C program to calculate MULTIPLICATION of two integer without using (*) operator.

#include<stdio.h>

int main(){
    int a, b, mul=0, i;

    printf("Enter the value of a : \n", a);
    scanf("%d", &a);

    printf("Enter the value of b : \n", b);
    scanf("%d", &b);

    for(i=1;i<=b;i++){
        mul += a;
    }
    printf("Multiplication is :%d\n", mul);
    return 0;
}