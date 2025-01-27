#include <stdio.h>

int main() {
    char str[100];
    scanf("%99s[^\n]",str);
    printf("%s",str);
    return 0;
}