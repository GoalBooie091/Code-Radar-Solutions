#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b;
    scanf("%f",&a);
    scanf("%f",&b);
    int c;
    c = a*b;
    printf("Product: %f",c);
    return 0;
}