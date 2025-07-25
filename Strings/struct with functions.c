Struct with functions
#include <stdio.h>
#include <string.h>
struct mobile {
    int ram;
    char model[20];  
    int price;
};
void print(struct mobile n) {
    printf("Model: %s\n", n.model);
    printf("RAM: %d GB\n", n.ram);
    printf("Price: %d Rs\n", n.price);
}
int main() {
    struct mobile m1;
    m1.ram = 8;
    strcpy(m1.model, "Samsung A14");
    m1.price = 15000;
    print(m1);

    return 0;
}
