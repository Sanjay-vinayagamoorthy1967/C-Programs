#include <stdio.h>

int main(){
    int total,n,usage;
    scanf("%d %d", &total,&n);
    int sum=0,count=0,count1=0;
    while(n--){
        scanf("%d", &usage);
        sum=sum+usage;
        if(sum<=total){
            count++;
        }
        if(sum>=0){
            count1++;
        }
    }printf("Exhausted Day: %d\n", count);
    printf("Overcaused Day: %d", count1);
}