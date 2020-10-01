// C program to put miss/mrs before name on the basis of marital status.

#include<stdio.h>
#include<string.h>

int main(){
    char name[30] = {0}; 
    char YesNo[10] = {0}; 

    printf("Enter Name : ");
    gets(name);

    printf("Are you married (Y-Yes/N-No) : ");
    gets(YesNo);

    if((!strcmp(YesNo,"yes")) || (!strcmp(YesNo,"Y"))){
        printf("Your name is : Mrs. %s", name);
    }else if((!strcmp(YesNo,"no")) || (!strcmp(YesNo,"N"))){
        printf("Your name is : Miss %s", name);
    }else{
        printf("Invalid Marital status.");
    }
    return 0;
}