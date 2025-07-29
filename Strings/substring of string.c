#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    char *ptr;
    printf("Enter the main string: ");
    scanf("%[^\n]", str1);
    printf("Enter the substring: ");
    scanf("%s", str2);
    ptr = strstr(str1, str2);
    if (ptr == NULL) {
        printf("'%s' is NOT a substring of '%s'\n", str2, str1);
    } else {
        int position = ptr - str1;
        printf("'%s' is a substring of '%s' at position %d\n", str2, str1, position);
    }

    return 0;
}
