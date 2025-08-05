#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char sub[50];

    printf("Enter a main string: ");
    fgets(str, sizeof(str), stdin); 

    printf("Enter a substring to search: ");
    fgets(sub, sizeof(sub), stdin);

    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    if (strstr(str, sub) != NULL) {
        printf("✅ Substring found!\n");
    } else {
        printf("❌ Substring not found.\n");
    }

    return 0;
}
