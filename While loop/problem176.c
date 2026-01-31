#include <stdio.h>

int main(){
    int n,hours;
    scanf("%d", &n);
    int sum=0,count=0;
    while(n--){
        scanf("%d", &hours);
        sum=sum+hours;
        if(hours>0 && hours>2){
            count++;
        }
    }printf("Total delay: %d\n", sum);
    printf("Delayed days: %d", count);

}