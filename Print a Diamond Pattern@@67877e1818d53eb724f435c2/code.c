#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i=1;
    int half=0;
    while(i>0){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i+(i-1);j++){
            printf("*");
        }
        printf("\n");
        if(i<=n && half==0)
            ++i;
        else
            --i;
        if(i>=n)
            half=1;
        
    }
    // for(int i=1;i<=n;i++){
    //     for(int s=1;s<=n-i;s++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=i+(i-1);j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(int i=n-1;i>=1;i--){
    //     for(int s=1;s<=n-i;s++){
    //         printf(" ");
    //     }
    //     for(int j=1;j<=i+(i-1);j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    return 0;
}