#include <stdio.h>

int main() {
    float num;
    
    // Ensure prompt matches expected format exactly
    printf("enter a floating-point number: ");  
    
    // Read input properly
    if (scanf("%f", &num) != 1) {
        return 1; // Exit if input is invalid
    }

    // Print output exactly as expected
    printf("you entered: %.2f\n", num);
    
    return 0;
}