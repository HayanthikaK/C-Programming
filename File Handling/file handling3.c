#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("f1.txt", "r");  
    char str; 

    if (fptr == NULL) {
        printf("File not found\n");
    } else {
       str=getc(fptr);
       printf("%c ",str);
       str=getc(fptr);
       printf("%c ",str);
       str=getc(fptr);
       printf("%c ",str);
       fclose(fptr);
    }

    return 0;
}
