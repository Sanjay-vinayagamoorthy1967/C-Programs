#include <stdio.h>
int main(){
    int data,daily;
    scanf("%d", &data);
    int days;
    scanf("%d", &days);
    int rem=data;
    int count=0,sum=0;
    while(days>0){
        scanf("%d", &daily);
        sum=sum+daily;
        if(sum<=data){
            count++;
            rem=rem-daily;
        }
        days--;
    }printf("Data used: %d\n", count);
    printf("Remaining data: %d GB", rem);
}