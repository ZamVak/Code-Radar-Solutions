#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    //int len=sizeof(n)*8;
    (n >> 31) & 1 ?printf("Set"):printf("Not Set");
    return 0;
}