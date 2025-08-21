#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, count = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                count++;
        }

    printf("Number of zero elements = %d\n", count);

    return 0;
}
