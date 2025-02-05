#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    n>=60?printf("Eligible"):printf("Not Eligible");
    return 0;
}