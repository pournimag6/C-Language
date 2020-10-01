//C Program to check whether number is odd or even.

#include<stdio.h>

int main(){
    int n,result;
    printf("Enter value of n : ");
    scanf("%d", &n);

    result = n%2;

    if(result==0){
        printf("Number is Even.",result);
    }
    else{
        printf("Number is Odd.",result);
    }
    
    return 0;
}