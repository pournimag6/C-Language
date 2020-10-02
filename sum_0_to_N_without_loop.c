// C program to calculate sum of 0 to N numbers without using loop.

#include<stdio.h>

int main(){ 
    int n, sum;

    printf("Enter a number : ");
    scanf("%d", &n);

    sum = n*(n+1)/2;
    printf("Sum of all numbers till %d is : %d", n, sum);
    return 0;
}
