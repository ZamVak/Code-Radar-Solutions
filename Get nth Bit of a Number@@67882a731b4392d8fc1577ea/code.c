#include <stdio.h>

int main() {
    int n,p;
    scanf("%d%d",&n,&p);
    printf("%d",(n>>p)&1);
    return 0;
}