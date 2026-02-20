#include <stdio.h>

int main() {
    int start, end, divisor, i;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    printf("Numbers divisible by %d between %d and %d are:\n", divisor, start, end);

    for (i = start; i <= end; i++) {
        if (i % divisor == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
