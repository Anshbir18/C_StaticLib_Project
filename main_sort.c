#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "cutil.h"



void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    generateRandomArray(arr, n);

    printf("Original Array:\n");
    printArray(arr, n);

    // Choose the sorting algorithm based on array size
    clock_t start_time, end_time;
    if (n <= 10) {
        // For small arrays, use Insertion Sort
        printf("Using Insertion Sort\n");
        start_time = clock();
        insertionSort(arr, n);
        end_time = clock();
    } else if (n <= 100) {
        // For medium-sized arrays, use Selection Sort
        printf("Using Selection Sort\n");
        start_time = clock();
        selectionSort(arr, n);
        end_time = clock();
    } else {
        // For large arrays, use Merge Sort
        printf("Using Merge Sort\n");
        start_time = clock();
        mergeSort(arr, 0, n - 1);
        end_time = clock();
    }

    printf("Sorted Array:\n");
    printArray(arr, n);

    printf("Sorting Time: %lf seconds\n", (double)(end_time - start_time) / CLOCKS_PER_SEC);

    return 0;
}
