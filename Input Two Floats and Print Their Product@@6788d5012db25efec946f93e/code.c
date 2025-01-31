#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%2lf",&a);
    scanf("%2lf",&b);
    float c;
    c = a*b;
    printf("Product: %2lf",c);
    return 0;
}