#include <stdio.h>

int main() {
    char str[100];
    char str2[100];
    scanf("%99s[^\n] %99s",str,str2);
    printf("%s",str);
    return 0;
}