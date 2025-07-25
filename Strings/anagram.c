#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1, len2, count = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not an anagram\n");
        return 0;
    }

    for(i = 0; i < len1; i++) {
        for(j = 0; j < len2; j++) {
            if(str1[i] == str2[j]) {
                str2[j] = '0';  // Mark matched character
                count++;
                break;
            }
        }
    }

    if(count == len1)
        printf("Strings are anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
