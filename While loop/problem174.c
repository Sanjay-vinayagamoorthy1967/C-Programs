#include <stdio.h>

int main(){
    int fuel,n,trip;
    scanf("%d %d", &fuel,&n);
    int sum=0,count=0;
    int rem=fuel;
    while(n--){
        scanf("%d", &trip);
        sum=sum+trip;
        if(sum<=fuel){
            count++;
            rem=rem-trip;
        }
    }printf("Completed Trip: %d\n", count);
    printf("Remaining Trip: %d", rem);
}