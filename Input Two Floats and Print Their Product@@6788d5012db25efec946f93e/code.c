#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    float c;
    c = a*b;
    printf("Product: %.2f",c);
    return 0;
}