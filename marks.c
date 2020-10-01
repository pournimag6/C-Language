//C program to read marks and print percentage and division based on marks.

#include<stdio.h>

int main(){
    int English, Maths, Science, sum;
    float percentage;
    printf("Enter marks for English : ");
    scanf("%d", &English);

    printf("Enter marks for Maths : ");
    scanf("%d", &Maths);

    printf("Enter marks for Science : ");
    scanf("%d", &Science);

    sum = English + Maths + Science;
    percentage = (float)sum*100/300;

    printf("Sum is : %d\n", sum);
    printf("Obtained percentage are : %f\n", percentage);

    if(percentage>=75){
        printf("Distinction!", percentage);
    }else if (percentage>=60 && percentage<=75)
    {
        printf("Firstclass!", percentage);
    }else if(percentage>=50 && percentage<=60)
    {
        printf("Secondclass!", percentage);
    }else if(percentage>=40 && percentage<=50)
    {
        printf("You are Passed! You can do better.");
    }else{
        printf("You Failed. Better luck next time.", percentage);
    }

    return 0;
}