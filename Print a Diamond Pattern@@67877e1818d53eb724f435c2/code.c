#include <stdio.h>

int main() {\
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i+(i-1);i++){
            printf("*");
        }
    }
    // for(i=n-1;i>=1;i--){
    //     printf("u");
    // }
    return 0;
}