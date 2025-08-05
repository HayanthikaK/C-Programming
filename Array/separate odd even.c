#include <stdio.h>

int main() {
    // Given array
    int numbers[] = {11, 3, 5, 6, 7, 8, 9, 34};
    int result[100];  // Final result array
    int even_index = 0, odd_index = 1;
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Loop through the original array
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            // Even number → put in even index
            result[even_index] = numbers[i];
            even_index += 2;
        } else {
            // Odd number → put in odd index
            result[odd_index] = numbers[i];
            odd_index += 2;
        }
    }

    // Print final rearranged array
    printf("Rearranged array (even at even, odd at odd index):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

