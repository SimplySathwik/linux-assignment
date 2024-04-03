#include <stdio.h>

int main() {
    int *ptr = NULL;

    // Check if the pointer is not NULL before dereferencing
    if (ptr != NULL) {
        printf("%d", *ptr);
    } else {
        printf("Pointer is NULL. Cannot dereference.\n");
    }

    return 0;
}
