#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    n%2?printf("Odd"):printf("Even");
    return 0;
}