#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, max;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    max = a[0][0];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] > max)
                max = a[i][j];

    printf("Maximum element in matrix = %d\n", max);

    return 0;
}
