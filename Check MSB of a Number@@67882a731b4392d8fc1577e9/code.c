#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    //int len=sizeof(n)*8;
    printf("%d",n >> 31);
    return 0;
}