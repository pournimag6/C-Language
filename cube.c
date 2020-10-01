//C Program to find cube of any number using with and without pow() function.

#include<stdio.h>
#include<math.h>  //this library contains contains pow() function 

int main(){
    int a, cube;
    printf("Enter a number : \n");
    scanf("%d", &a);

    //cube = a*a*a;
    cube = pow(a, 3);
    printf("Cube of number is : %d\n",cube);
    return 0;
}