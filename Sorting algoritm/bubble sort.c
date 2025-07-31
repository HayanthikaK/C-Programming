#include <stdio.h>

int main() {
    int n, temp;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Bubble sort
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr1[j] > arr1[j + 1]) {
                // Swap
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
