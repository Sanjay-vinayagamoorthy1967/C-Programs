#include <stdio.h>

int main(){
    int table,sum=0;
    scanf("%d", &table);
    int limit;
    scanf("%d", &limit);
    for(int i=1;i<=10;i++){
        if(i%table==0){
            sum=sum+i;
        }
    }
    printf("%d", sum);
}