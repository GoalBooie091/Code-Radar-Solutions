#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() { 
    int n;
    scanf("%d \n",&n);
    printf("Hexadecimal: 0x%x\n",n);
    printf("octal: %o",n);
    return 0;
}