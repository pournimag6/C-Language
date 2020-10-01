//C Program to find Qoutient and Remainder from division operation.

#include<stdio.h>

int main(){
    int a, b, Q, R;
    printf("Enter value for a : \n");
    scanf("%d", &a);

    printf("Enter value for b : \n");
    scanf("%d", &b);

    Q = a/b;
    R = a%b;

    printf("Value of Qotient : %d\n", Q);
    printf("Value of Remainder : %d\n", R);
    return 0;
}