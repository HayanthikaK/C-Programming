
#include <stdio.h>
#include <string.h>

struct laptop {
    int lap_no;
    char lap_name[20];  
};

int main() {
    struct laptop l1;
    l1.lap_no = 1;
    strcpy(l1.lap_name, "Dell");  

    printf("Laptop Number: %d\n", l1.lap_no);
    printf("Laptop Name: %s\n", l1.lap_name);

    return 0;
}
