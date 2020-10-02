// C program to calculate Profit and Loss.

#include<stdio.h>

int main(){
    int amount, cost_price, selling_price;

    printf("Enter Cost price : \n");
    scanf("%d", &cost_price);

    printf("Enter Selling_price : \n");
    scanf("%d", &selling_price);

    if(selling_price > cost_price){
        amount = selling_price - cost_price;
        printf("Estimated Profit is : %d", amount);
    }else if(selling_price < cost_price){
        amount = cost_price - selling_price;
        printf("Estimated Loss is : %d", amount);
    }else{
        printf("No Profit No Loss.");
    }
    return 0;
}