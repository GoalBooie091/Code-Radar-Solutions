#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1, num2, num3;
    float average; 
    scanf("%d %d %d", &num1, &num2, &num3);
    average = (num1 + num2 + num3) / 3.0; 
    printf("Average: %d, %d, and %d is: %.2f\n", num1, num2, num3, average);
    return 0;
}