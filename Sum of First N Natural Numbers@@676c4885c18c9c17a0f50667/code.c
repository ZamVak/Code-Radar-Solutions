#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int z=0;z<=n;z++,sum+=z);
    return 0;
}