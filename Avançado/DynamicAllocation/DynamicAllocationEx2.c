#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
        arr[i] = i + 1;

    arr = realloc(arr, 5 * sizeof(int));
    for (int i = 3; i < 5; i++)
        arr[i] = (i + 1) * 10;

    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
