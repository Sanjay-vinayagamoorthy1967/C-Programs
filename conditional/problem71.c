#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a<=100){
        printf("%d", a*2);
    }else if(a>100 && a<=200){
        printf("%d", a*5);
    }
    return 0;
}