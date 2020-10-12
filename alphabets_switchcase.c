//C Program to check whether character is VOWEL or ALPHABET.

#include<stdio.h>

int main(){
    char ch;

    printf("Enter a character : ");
    scanf("%c", &ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is VOWEL", ch);
                break;
            default:
                printf("%c is an ALPHABET", ch);

        }
    }
    else{
         printf("%c is NOT an ALPHABET", ch);   
    }
    return 0;
}