#include <stdio.h>

int main() {
    int a[10][10], i, j, n, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    
    for (i = 0; i < n; i++)
        sum += a[i][i];

    printf("Sum of primary diagonal = %d\n", sum);

    return 0;
}
