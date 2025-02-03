#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    n<0?prinf("Negative"):printf("Positive");
    return 0;
}