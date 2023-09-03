#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap two integers in an array
void swap_array(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap_array(arr, j, j + 1);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break; // If no two elements were swapped in inner loop, the array is already sorted
    }
}

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        swap_array(arr, i, min_index);
    }
}

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Merge Sort
void merge(int arr[], int start, int end, int mid);
void mergeSort(int arr[], int start, int end) {
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end, mid);
}

void merge(int arr[], int start, int end, int mid) {
    int i, j, k;
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int arr1[n1], arr2[n2];
    for (i = 0; i < n1; i++) {
        arr1[i] = arr[start + i];
    }
    for (j = 0; j < n2; j++) {
        arr2[j] = arr[mid + j + 1];
    }
    i = 0;
    j = 0;
    k = start;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

// Quick Sort
void quickSort(int arr[], int start, int end) {
    if (start >= end)
        return;
    int last = start;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] < arr[start]) {
            swap_array(arr, i, last + 1);
            last++;
        }
    }
    swap_array(arr, start, last);
    quickSort(arr, start, last - 1);
    quickSort(arr, last + 1, end);
}
