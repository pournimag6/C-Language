//C program to write switchcase for Gender.

#include<stdio.h>

int main(){
    char Gender;

    printf("Enter gender(M/m or F/f) : ");
    scanf("%c", &Gender);

    switch(Gender)
    {
        case 'M':
        case 'm':
            printf("Male");
            break;
        case 'F':
        case 'f':
            printf("Female");
            break;
        
        default:
           printf("Unspecified Gender."); 
    }
    printf("\n");
    return 0;
}