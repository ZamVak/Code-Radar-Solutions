#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);
    if(isaplha(c))
    {
        c=tolower(c);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        printf("Vowel");
        else
        printf("Consonant");
    }
    else if(isdigit(c))
    printf("Digit");
    else
    printf("Special Character");
    return 0;
}