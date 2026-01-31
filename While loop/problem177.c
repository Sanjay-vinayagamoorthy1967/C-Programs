#include <stdio.h>

int main(){
    int n,hours;
    scanf("%d", &n);
    int max=0,count=0;
    while(n--){
        scanf("%d", &hours);
        if(hours>max){
            max=hours;
        }
        if(hours>5){
            count++;
        }
    }printf("Max usage: %d\n", max);
    printf("surge hours: %d", count);
}