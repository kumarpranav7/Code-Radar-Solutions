#include <stdio.h>

int main() {
    char ch;

    // Read a single character input, handling possible whitespace issues
    scanf(" %c", &ch);  

    // Print the exact required output format
    printf("you entered %c\n", ch);

    return 0;
}