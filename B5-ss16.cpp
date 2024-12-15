#include <stdio.h>

void updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        arr[position] = newValue; 
    } else {
        printf("Vi tri %d khong hop le!\n", position);
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu %d: %d\n", i, arr[i]);
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang truoc khi cap nhat:\n");
    printArray(arr, size);
    updateElement(arr, size, 42, 2);

    printf("\nMang sau khi cap nhat:\n");
    printArray(arr, size);

    return 0;
}

