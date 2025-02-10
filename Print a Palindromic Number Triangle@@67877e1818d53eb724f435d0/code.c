#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++)
            prinf(" ");
        int j=1,half=0;
        while(j>0){
            printf("%d",j);
            if(j<=i && half=0)
                ++j;
            else
                --j;
            if(j==i)
                half=1;
        }
        printf("\n");
    }
    return 0;
}