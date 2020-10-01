// C program to find HCF(Highest Common Factor).

#include<stdio.h>

int main(){
    int a, b, i, hcf;
    printf("Enter the value of a : \n", a);
    scanf("%d", &a);

    printf("Enter the value of b : \n", b);
    scanf("%d", &b);

    for(i = 1; i <= a || i <= b; i++) {
    if(a%i == 0 && b%i == 0)
        hcf = i;
    }

    printf("HCF = %d", hcf);
        
    return 0;
}

