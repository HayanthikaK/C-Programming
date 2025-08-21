#include <stdio.h>

int main() {
    int a[10][10], n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Upper triangular matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j)
                printf("0 ");
            else
                printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
