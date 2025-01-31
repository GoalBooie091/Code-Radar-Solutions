#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() { 
    float a;
    scanf("%6f",&a);
    scanf("%7f",&a);
    printf("Hexadecimal: %6f",a);
    printf("Octal: 7f",a);
    return 0;
}