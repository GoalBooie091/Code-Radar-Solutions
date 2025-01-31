#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char Hello[];
    scanf("%s",&Hello);
    printf("You entered: %s",Hello);
    return 0;
}