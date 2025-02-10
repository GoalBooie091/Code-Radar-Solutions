#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double number; 
    scanf("%1lf", &number);
    printf("You entered: %1lf\n", number);
    return 0;
}