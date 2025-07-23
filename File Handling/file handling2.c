#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("f1.txt", "r");  
    char str[50];  

    if (fptr == NULL) {
        printf("File not found\n");
    } else {
        fgets(str, 50, fptr); 
        printf("Read from file: %s", str);  
        fclose(fptr); 
    }

    return 0;
}
