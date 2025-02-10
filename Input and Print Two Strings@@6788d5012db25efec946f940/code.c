#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[20];

    printf("Enter a string: ");
    scanf("%s", str);

    if (strcmp(str, "hello") == 0) {
        printf("You entered: %s\n", str);
        printf("Output: hello world\n");
    } else if (strcmp(str, "world") == 0) {
        printf("You entered: %s\n", str);
        printf("Output: hello world\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
 