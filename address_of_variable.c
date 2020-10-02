//C program to find address of a variable;

#include<stdio.h>

int main(){
    char var;
    int n;
    float f;

    printf("Address of given variable is : %p\n", &var);
    printf("Address of given variable is : %p\n", &n);
    printf("Address of given variable is : %p\n", &f);

    return 0;
}