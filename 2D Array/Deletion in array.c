
#include <stdio.h>

int main() {
    int n, index;
    printf("Enter the total number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index number: \n");
    scanf("%d", &index);
    if(index >= 0 && index < n) {
        for(int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
    }
    printf("Array after Deletion of elements:");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

