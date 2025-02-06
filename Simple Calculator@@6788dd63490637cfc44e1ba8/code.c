#include <stdio.h>

int main() {
    int a,b;
    char opr;
    scanf("%d %d %c",&a,&b,&opr);
    if(opr=='/' && b==0){
        printf("error");
    }
    else{
    switch(opr){
        case '+':printf("%d",a+b);break;
        case '-':printf("%d",a-b);break;
        case '*':printf("%d",a*b);break;
        case '/':printf("%f",a/b);break;
        default:printf("error");
    }}
    return 0;
}