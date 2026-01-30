#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n%3==0 && n%7==0){
        printf("Multiple of both 3 and 7");
    }
    return 0;
}