#include <stdio.h>
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0 || j==0 || j==4)
                printf("5 ");
            else if(j==3)
                printf("%d ",i);
            else
                printf("5 ");
            }
        
        printf("\n");
    }
    return 0;
}
