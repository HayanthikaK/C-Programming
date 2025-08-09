#include <stdio.h>
#include <string.h>

int main() {
    char str[200], sub[100];
    int count = 0;
    char *pos;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline

    printf("Enter the substring to search: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0'; // Remove newline

    pos = str;

    // Loop until no more matches
    while ((pos = strstr(pos, sub)) != NULL) {
        count++;
        pos += strlen(sub); // Move past the last found occurrence
    }

    printf("The substring occurs %d times.\n", count);

    return 0;
}
