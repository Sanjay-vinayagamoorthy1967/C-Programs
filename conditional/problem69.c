#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c && c==a){
        printf("Equilateral Triangle");
    }else{
        printf("Not an Equilateral Triangle");
    }
    return 0;
}