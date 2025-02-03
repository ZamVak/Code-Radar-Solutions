#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",n%2);
    n%2?printf("Even"):printf("Odd");
    return 0;
}