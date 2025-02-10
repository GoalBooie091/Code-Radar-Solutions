#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double number; 
    scanf("%4lf", &number);
    printf("You entered: %4lf\n", number);
    return 0;
}