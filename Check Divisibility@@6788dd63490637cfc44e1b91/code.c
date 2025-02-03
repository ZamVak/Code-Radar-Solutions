#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    !(n%5) && !(n%11)?printf("Divisible"):printf("Not Divisible");
    return 0;
}