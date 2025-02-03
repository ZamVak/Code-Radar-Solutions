#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    n<0?printf("Negative"):n==0?printf("Zero"):printf("Positive");
    return 0;
}