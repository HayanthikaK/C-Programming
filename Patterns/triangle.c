#include <stdio.h>
int main() {
    int i, j;
    int n = 4;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'a' + j - 1);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%c", 'a' + j - 1);
        }
        printf("\n");
    }
    return 0;
}
