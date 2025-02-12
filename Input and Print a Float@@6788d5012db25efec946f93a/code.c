#include <stdio.h>

int main() {
    float num;
    printf("enter a floating-point number: "); /
    scanf(" %f", &num);  // Space before %f to handle buffer issues
    printf("you entered: %.6f\n", num); // Use %.6f for better precision handling
    return 0;
}