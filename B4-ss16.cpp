#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: %d\n", i + 1, *(arr + i)); 
    }
}

int main() {
    int arr[] = {3, 5, 7, 9, 11}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printArray(arr, size);

    return 0;
}

