//C Program to calculate SIMPLE INTEREST.

#include<stdio.h>

int main(){
    float principle, rate, year, SI;
    printf("Enter value for principle : ");
    scanf("%f", &principle);

    printf("Enter value for rate : ");
    scanf("%f", &rate);

    printf("Enter value for year : ");
    scanf("%f", &year);

    SI = (principle*rate*year)/100;
    printf("Calculated Simple Interest is : %f", SI);

    return 0;
}