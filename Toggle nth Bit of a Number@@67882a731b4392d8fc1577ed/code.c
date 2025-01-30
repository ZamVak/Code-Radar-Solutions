#include <stdio.h>


int main() {
    int n,p;
    scanf("%d%d",&n,&p);
    int tBit=(n>>p)&1;
    printf("%d",tBit );
    return 0;
}