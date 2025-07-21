#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    int len;
    printf("Enter the string: ");
    scanf("%s", str);  
    len = strlen(str); 
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; 
        }
    }
    printf("Uppercase String: %s\n", str);
    return 0;
}
