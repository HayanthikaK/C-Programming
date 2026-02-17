#include <stdio.h>
void readMatrix(int mat[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}
void multiplyMatrix(int A[2][2], int B[2][2], int result[2][2]) {
    int i, j, k;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
void displayMatrix(int mat[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int A[2][2], B[2][2], result[2][2];
    printf("Enter elements of first 2x2 matrix:\n");
    readMatrix(A);
    printf("Enter elements of second 2x2 matrix:\n");
    readMatrix(B);
    multiplyMatrix(A, B, result);
    printf("Result of matrix multiplication:\n");
    displayMatrix(result);
    return 0;
}
