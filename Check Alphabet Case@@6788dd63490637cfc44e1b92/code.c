#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%c",&a);
    if(a>=65 && a<=90)
    printf("Uppercase");
    return 0;
}