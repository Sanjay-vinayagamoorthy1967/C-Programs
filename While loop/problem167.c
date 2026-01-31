#include <stdio.h>

int main(){
    int days,width,count=0;
    scanf("%d", &days);
    int balance;
    scanf("%d", &balance);
    int i=1;
    while(i<=days){
        scanf("%d", &width);
        balance=balance+width;
        if(width<0 && balance<2000){
            count++;
        }
        i++;
    }printf("Final balance: %d\n", balance);
    printf("Low balance days: %d\n", count);
}