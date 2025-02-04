#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() { 
    int n = 10;
    printf("Decimal: %d\n",n);
    printf("Hexadecimal: %X\n",n);
    printf("octal: %o",n);
    return 0;
}