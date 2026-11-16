#include <stdio.h>

#define SIZE 10

int main()
{

    int mas[SIZE] = {10,9,8,7,6,5,4,3,2,1};
    for (int i = 1; i < SIZE; i++) {
        if (mas[i-1] > mas [i])
        {
            int mas_member = mas [i-1];
            mas[i-1] = mas[i];
            mas[i]= mas_member;
            i=0;
        }
    }
    printf("Arr member: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ",mas[i]);

    }
    printf("\n");


    return 0;
}
