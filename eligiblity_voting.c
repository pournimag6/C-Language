//C program to check whether a person is eligible or not for voting.

#include<stdio.h>

int main(){
    int n;

    printf("Enter your age : ");
    scanf("%d", &n);

    if(n>=18 && n<=90){
        printf("Your are eligible to vote!");
    }else{
        printf("Sorry! You are not eligible.");
    }
    return 0;
}