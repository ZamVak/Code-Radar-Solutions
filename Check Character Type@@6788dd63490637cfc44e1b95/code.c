#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    scanf("%c",&c);
    if((c>=65 && c<=90) || (c>=97 && c<=122))
    {
        //c=tolower(c);
        if(c>=65 && c<=90)
            c+=32;
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("Vowel\n");
        else
        printf("Consonant\n");
    }
    else if(isdigit(c)){
    printf("Digit\n");
    }
    else{
    printf("Special Character\n");}
    return 0;
}