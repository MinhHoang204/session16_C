#include <stdio.h>

int main() {
    int num = 10; 
    int *ptr = &num; 

    // Cách 1: Su dung bien truc tiep
    printf("Gia tri cua num (su dung bien truc tiep): %d\n", num);
    printf("Dia chi cua num (su dung bien truc tiep): %p\n", (void*)&num);

    // Cách 2: Su dung con tro
    printf("Gia tri cua num (su dung con tro): %d\n", *ptr);
    printf("Dia chi cua num (su dung con tro): %p\n", (void*)ptr);

    return 0;
}

