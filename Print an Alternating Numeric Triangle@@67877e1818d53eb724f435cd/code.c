#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1,b=1;i<=n;i++,b=!b){
        for(int j=1,z=b;j<=i;j++,z=!z){
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}