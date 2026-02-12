#include <stdio.h>
#include <ctype.h>
#include <string.h>
int excelColumnToNumber(char col[]) {
    int result = 0;
    for (int i = 0; col[i] != '\0'; i++) {
        char ch = toupper(col[i]);   
        result = result * 26 + (ch - 'A' + 1);
    }
    return result;
}
int main() {
    char input[100];
    printf("Enter Excel column name: ");
    scanf("%s", input);
    int columnNumber = excelColumnToNumber(input);
    printf("Column number: %d\n", columnNumber);
    return 0;
}
