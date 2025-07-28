
#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%p\n", &a[i]);
    }
    printf("Base address: %d\n", *a);

    return 0;
}
