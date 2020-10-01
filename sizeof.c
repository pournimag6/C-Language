//C Program that shows how sizeof works.

#include<stdio.h>

int main(){
    int n = 25;
    float n2 = 3.14;
    double n3 = 225.6; 
    char ch = 'a';
    char str[] = "Watermelon";

    printf("Size of n = %d\n", sizeof(n));
    printf("Size of n2 = %d\n", sizeof(n2));
    printf("Size of n3 = %d\n", sizeof(n3));
    printf("Size of ch = %d\n", sizeof(ch));
    printf("Size of str = %d\n", sizeof(str));

    return 0; 
}