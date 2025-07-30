
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int i, j, k, count = 0;
    printf("Enter the main string & substring: ");
    scanf(" %[^\n]\n%s", str1,str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (i = 0; i <= len1 - len2; i++) {
        count = 0;  
        for (j = 0, k = i; str2[j] != '\0'; j++, k++) {
            if (str1[k] == str2[j])
                count++;
            else
                break;
        }
        if (count == len2) {
            printf("Substring\n");
            return 0;  // exit early
        }
    }
    printf("Not substring\n");
    return 0;
}

