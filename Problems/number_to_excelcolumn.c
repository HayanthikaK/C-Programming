#include <stdio.h>
#include <string.h>
void numberToExcelColumn(int num, char result[]) {
    int i = 0;
    while (num > 0) {
        num--;  // Adjust because Excel is 1-based (A=1)
        result[i++] = (num % 26) + 'A';
        num /= 26;
    }
    result[i] = '\0';
    // Reverse the string
    int start = 0, end = i - 1;
    while (start < end) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start++;
        end--;
    }
}
int main() {
    int num;
    char column[100];
    printf("Enter column number: ");
    scanf("%d", &num);
    numberToExcelColumn(num, column);
    printf("Excel column name: %s\n", column);
    return 0;
}
