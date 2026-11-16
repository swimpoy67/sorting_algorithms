#include <stdio.h>

#define SIZE 10

int main()
{
    int mas[SIZE] = {10, 9, 3, 4, 5, 5, 4, 3, 2, 1};

    for (int i = 1; i < SIZE; i++) {
        if (mas[i] < mas[i - 1]) {
            int mas_mem = mas[i];
            for (int j = i; j > 0 && mas_mem < mas[j - 1]; j--) {
                int mas_helper = mas[j];
                mas[j] = mas[j - 1];
                mas[j - 1] = mas_helper;
            }
        }
    }

    printf("Arr member: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", mas[i]);
    }
    printf("\n");

    return 0;
}