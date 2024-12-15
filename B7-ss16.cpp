#include <stdio.h>

void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {9, 3, 5, 1, 7, 2}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang truoc khi sap xep:\n");
    printArray(arr, size);
    sortArray(arr, size);

    printf("Mang sau khi sap xep tang dan:\n");
    printArray(arr, size);

    return 0;
}

