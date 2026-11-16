#include <stdio.h>
#include "stupid_sort.h"

#define SIZE 10

void print_array(const int *arr, int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int mas[SIZE] = {10, 4, 8, 2, 9, 1, 5, 7, 3, 6};

    printf("Исходный массив:       ");
    print_array(mas, SIZE);

    stupid_sort(mas, SIZE);

    printf("Отсортированный массив: ");
    print_array(mas, SIZE);

    return 0;
}