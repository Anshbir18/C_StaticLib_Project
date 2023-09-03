#include <stdio.h>
#include <string.h>

int freqChar(void *arr, size_t size, size_t elementSize, void *target) {
    int frequency = 0;

    for (size_t i = 0; i < size; i++) {
        if (memcmp(arr + i * elementSize, target, elementSize) == 0) {
            frequency++;
        }
    }

    return frequency;
}
