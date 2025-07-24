#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("f1.txt", "a");  
    char str[10];

    if (fptr == NULL) {
        printf("File not found\n");
    } else {
        strcpy(str, "Hayn");       
        fputs(str, fptr);          
        fputs("\n", fptr);         
        fclose(fptr);              
        printf("Data written to file.\n");
    }

    return 0;
}
Write:
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fptr;
    fptr = fopen("f1.txt", "w");  
    char str[10];

    if (fptr == NULL) {
        printf("File not found\n");
    } else {
        strcpy(str, "Hayn");       
        fputs(str, fptr);          
        fputs("\n", fptr);         
        fclose(fptr);              
        printf("Data written to file.\n");
    }

    return 0;
}
