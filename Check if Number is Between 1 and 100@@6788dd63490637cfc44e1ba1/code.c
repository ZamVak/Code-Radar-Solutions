#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    n>=1 && n<=100?printf("In Range"):printf("Out of Range");
    return 0;
}