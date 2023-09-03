#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a power of 2
bool isPowerOf2(int number) {
    if (number <= 0) {
        return false; // Negative numbers and 0 are not powers of 2
    }

    return (number & (number - 1)) == 0;
}

