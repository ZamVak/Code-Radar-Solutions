#include <stdio.h>

int main() {
    int n,p;
    scanf("%d%d",&n,&p);
    int tBit=((n>>p)&1)^1;
    int leftBits=((1<<p)-1)&n;
    printf("%d %d",tBit,leftBits);
    return 0;
}