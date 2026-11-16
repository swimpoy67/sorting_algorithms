#include "stupid_sort.h"

void stupid_sort(int *arr, int size)
{
    if (!arr || size <= 1) {
        return;
    }

    int i = 0;
    while (i < size - 1) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = 0; // Сброс в начало массива
        } else {
            i++;
        }
    }
}