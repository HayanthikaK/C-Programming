#include <stdio.h>
int main(){
    char word;
    printf("Character: ");
    scanf("%c",&word);
    (word>=97 && word <= 122) || (word>= 65 && word<=90)? 
    printf("Alphabet"): printf("Not alphabet");
    
    return0;
}