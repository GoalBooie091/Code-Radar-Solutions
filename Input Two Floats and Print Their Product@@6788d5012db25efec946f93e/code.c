#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f",&a);
    float b;
    scanf("%f",&b);
    float c;
    c = a*b;
    printf("Product: %f",c);
    return 0;
}