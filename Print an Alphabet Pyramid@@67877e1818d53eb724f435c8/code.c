#include <stdio.h>

int main() {
    int n;
    char c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1,c='A';j<=i;j++,c++){
            printf("%c ",c);
        }
        printf("\n");
    }
    return 0;
}