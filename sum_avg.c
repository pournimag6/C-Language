//C Program to calculate sum and average of given values.

#include<stdio.h>

int main(){
    int a, b, sum;
    float avg;

    printf("Enter value for a : \n");
    scanf("%d", &a);

    printf("Enter value for b : \n");
    scanf("%d", &b);

    sum = a + b ;
    avg = (float)(a + b)/2;
    
    printf("sum is : %d\n", sum);
    printf("avg is : %f\n", avg);

    return 0;
}
