#include <stdio.h>
#include <stdarg.h>

// Function to add variable number of integers
int sub_integers(int num, ...) {
    va_list args;
    va_start(args, num);
    
    int result = 0; 

    // Iterate
    for (int i = 0; i < num; ++i) {
        int value = va_arg(args, int); 
        result -= value;
    }
    
    va_end(args);
    return result;
}
