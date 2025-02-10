#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double number; 
    scanf("%0lf", &number);
    printf("You entered: %0lf\n", number);
    return 0;
}