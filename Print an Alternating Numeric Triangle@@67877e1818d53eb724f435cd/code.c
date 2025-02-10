#include <stdio.h>

int main() {
    int n,b=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++,b=b&0){
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}