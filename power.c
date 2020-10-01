//C program to calculate X^N (X to the power of N) using pow function.

#include<stdio.h>
#include<math.h>

int main(){
    int x, n, power;
    printf("Enter a number : \n");
    scanf("%d", &x);

    printf("Enter the power : \n");
    scanf("%d", &n);

    
    power = pow(x, n);
    printf("Power of number is : %d\n",power);
    return 0;
}