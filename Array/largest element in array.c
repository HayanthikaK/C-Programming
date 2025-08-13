#include <stdio.h>

int main() {
    int n, i, largest;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest element is: %d\n", largest);
    return 0;
}
