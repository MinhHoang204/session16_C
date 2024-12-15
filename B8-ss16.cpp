#include <stdio.h>
#include <string.h>

void reverseString(const char *input, char *reversed) {
    int length = strlen(input); 
    for (int i = 0; i < length; i++) {
        *(reversed + i) = *(input + length - i - 1); 
    }
    *(reversed + length) = '\0'; 
}

int main() {
    char inputString[100];    
    char reverseString[100];  

    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
    }

    reverseString(inputString, reverseString);
    
    printf("Chuoi goc: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

