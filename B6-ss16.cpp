#include <stdio.h>

int findElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int valueToFind = 7;

    int position = findElement(arr, size, valueToFind);

    if (position != -1) {
        printf("Gia tri %d duoc tim thay tai vi tri: %d\n", valueToFind, position);
    } else {
        printf("Gia tri %d khong ton tai trong mang.\n", valueToFind);
    }

    return 0;
}

