#include <stdio.h>

int main() {
    float radius; // Variable to hold the radius of the circle
    float area;   // Variable to hold the area of the circle
    const float PI = 3.14; // Define the value of pi

    // Prompt the user for input
    printf("Enter the radius of the circle: ");
    
    // Read the radius from standard input
    scanf("%f", &radius);
    
    // Calculate the area of the circle
    area = PI * radius * radius;

    // Print the area
    printf("Area: %.2f\n",area);

    return 0;
}