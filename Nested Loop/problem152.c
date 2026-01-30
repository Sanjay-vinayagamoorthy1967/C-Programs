#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    for(int i=num;i>0;i--){
        for(int j=1;j<=num-i;j++){
            printf(" ");
        }      
        for(int k=1;k<=i*2-1;k++){
            printf("*");
        }             
        printf("\n");
    }
}