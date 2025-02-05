#include <stdio.h>

int main() {
    int age,cs;
    scanf("%d %d",&age,&cs);
    (age>=18) && cs?printf("Eligible"):printf("Not Eligible");
    return 0;
}