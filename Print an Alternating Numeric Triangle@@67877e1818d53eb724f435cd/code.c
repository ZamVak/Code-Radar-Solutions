#include <stdio.h>

int main() {
    int n,b=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++,~b){
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}