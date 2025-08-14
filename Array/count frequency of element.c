#include <stdio.h>

int main() {
    int n, i, j, count;
    int arr[100], visited[100] = {0};

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Element Frequency:\n");
    for (i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}
