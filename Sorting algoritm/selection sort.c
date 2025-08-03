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
    for(int i = 0; i < n - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr1[j] < arr1[min_index]) {
                min_index = j;
            }
        }
        // Swap
        int temp = arr1[i];
        arr1[i] = arr1[min_index];
        arr1[min_index] = temp;
    }
    printf("Sorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    return 0;
}
