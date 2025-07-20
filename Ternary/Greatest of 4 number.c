#include <stdio.h>
int main() {
    int num1,num2,num3,num4;
    printf("Enter number: ");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    (num1 > num2 && num1 > num3 && num1 > num4) ? printf("Number 1 is greater: %d",num1);
    (num2 > num1 && num2 > num3 && num2 > num4) ? printf("Number 2 is greater: %d",num2);
    (num3 > num1 && num3 > num2 && num3 > num4) ? printf("Number 3 is greater: %d",num3);
    printf("Number 4 is greater: %d",num4);
    return 0;
}