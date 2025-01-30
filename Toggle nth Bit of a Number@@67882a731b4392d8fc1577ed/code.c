#include <stdio.h>

int main() {
    int n,p;
    scanf("%d%d",&n,&p);
    int tBit=((n>>p)&1)^1;
    int tBitMask=tBit<<p;
    int leftBits=((1<<p)-1)&n;
    int leftComb=leftBits|tBitMask;
    int rightComb=(n>>(p+1))<<(p+1);
    printf("%d",rightComb|leftComb);
    return 0;
}