//C Program to find difference between two integers on a basis of larger and smaller number.

#include<stdio.h>

int main(){
    int a, b, diff;
    printf("Enter value for a : ");
    scanf("%d", &a);

    printf("Enter value for b : ");
    scanf("%d", &b);

    if(a>b){
        diff = a-b;
        printf("a-b is %d", diff);
    }else if (b>a)
    {
        diff = b-a;
        printf("b-a is %d", diff);
    }else
    {
        printf("Both numbers are equal");
    }
    
    
    return 0;
}