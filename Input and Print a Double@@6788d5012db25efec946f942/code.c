#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double number; 
    scanf("%lf", &number);
    printf("You entered: %lf\n", number);
    return 0;
}