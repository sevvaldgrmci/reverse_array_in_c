#include <stdio.h>

void reverseArray (int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main () {
    int arr[] = {92, 35, 14, 73};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (i = 0; i < size; i++ ) {
        printf("%d", arr[i]);
    }

    return 0;
}