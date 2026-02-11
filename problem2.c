#include <stdio.h>

void greater(int n1,int n2){
    int num=0;
    if(n1>n2){
        num=n1;
    }else{
        num=n2;
    }

    printf("%d", num);
}

int main(){
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    greater(n1,n2);
}