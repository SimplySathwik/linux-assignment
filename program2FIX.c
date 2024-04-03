#include <stdio.h>

int main() {
    int arr[5];

    // Ensure the array index is within bounds
    if (10 < sizeof(arr) / sizeof(arr[0])) {
        arr[10] = 42;
    } else {
        printf("Array index out of bounds.\n");
    }

    return 0;
}
