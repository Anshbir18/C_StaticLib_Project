#include <stdio.h>
#include <stdarg.h>

int add_integers(int num, ...) {
    va_list args;
    va_start(args, num);
    
    int result = 0; 

    // Iterate
    for (int i = 0; i < num; ++i) {
        int value = va_arg(args, int); // Get the next argument
        result += value;
    }
    
    va_end(args); // Clean up the argument list
    return result;
}
