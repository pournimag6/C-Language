//C Program to find larger number among three numbers.

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter value for a : ");
    scanf("%d", &a);

    printf("Enter value for b : ");
    scanf("%d", &b);

    printf("Enter value for c : ");
    scanf("%d", &c);

    if(a>b && a>c){
        printf("Larger number is %d", a);
    }else if (b>a && b>c)
    {
        printf("Larger number is %d", b);
    }else if(c>a && c>b)
    {
        printf("Larger number among a, b, c is %d", c);
    }else
    {
        printf("all numbers are same");
    }
    
    
    
    return 0;
}