#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i - 1; j++) {
            printf("%d ", j);
        }
        for (int j = n; j >= n - i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
