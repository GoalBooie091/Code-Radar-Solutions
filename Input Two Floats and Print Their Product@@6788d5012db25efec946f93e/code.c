#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    scanf("%f",&a);
    float b;
    scanf("%f",&b);
    printf("Product: %f*%f",a,b);
    return 0;
}