#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n>=18){
        printf("Eligible to vote");
    }else{
        printf("Not eligible to vote");
    }
    return 0;
}