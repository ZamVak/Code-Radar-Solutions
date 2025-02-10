#include <stdio.h>

int main() {
    int n,z=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++,z++){
            printf("%d ",z);
        }
        printf("\n");
    }
    return 0;
}