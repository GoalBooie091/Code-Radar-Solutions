#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() { 
    float a;
    scanf("%6f",&a);
    scanf("%7f",&a);
    printf("Hexadecimal: %6f\n octal: %7f",a,a);
    return 0;
}