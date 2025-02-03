#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    scanf("%c",&c);
    if(isaplha(c))
    {
        c=tolower(c);
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