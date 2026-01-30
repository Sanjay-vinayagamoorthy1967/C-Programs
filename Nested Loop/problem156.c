#include <stdio.h>

int main(){
   
    for(int i=0;i<4;i++){
        for(int j=1;j<=i+1;j++){
            printf("%d", j);
        }            
        for(int k=i;k<=4*1.4-i;k++){
            printf(" ");
        }       
        for(int j=i+1;j>0;j--){
            printf("%d", j);
        }
        printf("\n");
         
    }
}