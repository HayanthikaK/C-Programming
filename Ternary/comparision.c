#include <stdio.h>
int main(){
    int num1;
    printf("Enter integer: ");
    scanf("%d",&num1);
    (num1==0)?printf("zero");
    (num1<0)?printf("Negative"):print("Positive");
    return 0;
}