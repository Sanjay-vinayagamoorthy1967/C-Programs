#include <stdio.h>

void table(int n){
    for(int i=1;i<=10;i++){
        int num=i*n;
        printf("%d*%d=%d\n", n,i,num);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    table(n);
}