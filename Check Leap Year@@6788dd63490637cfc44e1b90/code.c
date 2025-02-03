#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(n%4==0){
        if(n%100==0)
        printf("waah");
    }
    return 0;
}