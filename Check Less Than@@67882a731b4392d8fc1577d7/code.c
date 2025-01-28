#include <stdio.h>

int lesThan(int a,int b) {
    if(a<b){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    lesThan(a,b)?printf("True"):printf("False");
    return 0;
}