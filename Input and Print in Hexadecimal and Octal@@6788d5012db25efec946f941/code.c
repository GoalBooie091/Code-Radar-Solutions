#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() { 
    float a,b;
    scanf("%6f",&a);
    scanf("%7f",&b);
    printf("Hexadecimal: %6f",a);
    printf("Octal: 7f",b);
    return 0;
}