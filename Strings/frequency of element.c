
#include <stdio.h>

int main() {
    int arr[100], freq[100] = {0}, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    printf("Frequency of each element:\n");
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0)
            printf("%d:%d ", i, freq[i]);
    }

    return 0;
}
