#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int h;
    if(x>y)
    h=x;
    else
    h=y;

    if(z>h)
    h=z;
    printf("%d",h);
    return 0;
}