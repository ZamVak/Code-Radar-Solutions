#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%c",&a);
    if(a>=65 && a<=90)
    printf("Uppercase");
    else if(a>=92 && a<=122)
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}