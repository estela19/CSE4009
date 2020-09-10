//Template
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int compare(int a, int b) {
    if (a > b)
        return 1;
    else
        return -1;
}

void swap(int* a, int* b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


/***************************************************************
define bubble sort that uses pointer to 'compare' function above
***************************************************************/


int main() {
    int n_array[SIZE] = { 2,-9, 10, 15, 1, 3, -12, 5, 4, 1 };

    int (*cmp)(int, int) = compare;

    for (int i = SIZE - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (cmp(n_array[j], n_array[j + 1]) == 1) {
                swap(&n_array[j], &n_array[j + 1]);
            }
        }
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", n_array[i]);
    }

    return 0;
}
