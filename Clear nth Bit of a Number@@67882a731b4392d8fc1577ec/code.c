#include <stdio.h>

int main() {
    int n,p;
    scanf("%d%D",&n,&p);
    printf("%d",((n>>p+1)<<p+1) | ((1<<p+1)-1)&n);
    return 0;
}