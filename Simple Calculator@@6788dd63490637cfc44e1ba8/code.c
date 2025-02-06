#include <stdio.h>

int main() {
    int a,b,opr;
    scanf("%d%d%c",&a,&b,&opr);
    switch(day){
        case '+':printf("%d",a+b);break;
        case '-':printf("%d",a-b);break;
        case '*':printf("%d",a*b);break;
        case '/':printf("%d",a/b);break;
        default:printf("Invalid");
    }
    return 0;
}