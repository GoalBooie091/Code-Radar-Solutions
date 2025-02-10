#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float number; 
    scanf("%4f", &number);
    printf("You entered: %4f\n", number);
    return 0;
}