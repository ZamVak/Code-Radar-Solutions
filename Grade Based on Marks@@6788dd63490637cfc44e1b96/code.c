#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m;
    scanf("%d",&m);
    if(m<60)
    printf("F");
    else if(m>=60 && m<70)
    printf("D");
    else if(m>=70 && m<80)
    printf("C");
    else if(m>=80 && m<90)
    printf("B");
    else
    printf("A");
    return 0;
}