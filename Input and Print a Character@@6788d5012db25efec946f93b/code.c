#include <stdio.h>

int main() {
    char ch; // Rename the variable
    printf("A single character: ");  
    scanf(" %c", &ch); // Use %c for character input
    printf("You entered: %c\n", ch); // Print the character
    
    return 0;
}