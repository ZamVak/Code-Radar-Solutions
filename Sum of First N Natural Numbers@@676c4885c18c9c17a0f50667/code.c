#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int z=1;z<=n-1;z++,sum+=z);
    printf("%d",sum);
    return 0;
}