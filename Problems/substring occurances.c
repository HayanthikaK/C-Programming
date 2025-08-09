#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[50];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    printf("Enter the substring to search: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0'; // Remove newline

    // strstr() returns pointer if substring is found, NULL if not
    if (strstr(str, sub) != NULL) {
        printf("Substring found!\n");
    } else {
        printf("Substring not found!\n");
    }

    return 0;
}
