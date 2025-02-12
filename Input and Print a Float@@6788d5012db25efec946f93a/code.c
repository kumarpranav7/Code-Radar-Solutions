#include <stdio.h>

int main() {
    float num;
    printf("enter a floating-point number: "); // Ensure exact prompt
    scanf("%f", &num);  // No extra space before %f is needed
    printf("you entered: %.2f\n", num); // Ensures exactly 2 decimal places
    return 0;
}