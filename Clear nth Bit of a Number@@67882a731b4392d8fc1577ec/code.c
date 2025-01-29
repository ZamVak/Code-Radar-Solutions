#include <stdio.h>

int main() {
    int n,p;
    scanf("%d%D",&n,&p);
    printf("%d",((n>>p)&0)<<p | (n>>p)&1);
    return 0;
}