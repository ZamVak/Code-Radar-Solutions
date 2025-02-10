#include <stdio.h>

int main() {
    char str[100];
    char str2[100];
    scanf("%99s[^\n]",str);
    scanf("%99s[^\n]",str2);
    printf("You entered: %s and %s",str,str2);
    return 0;
}