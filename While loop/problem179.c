#include <stdio.h>

int main(){
    int a,n,val;
    scanf("%d %d", &a,&n);
    int sum=0,count=0;
    while(n--){
        scanf("%d", &val);
        sum=sum+val;
        if(sum<=a){
            count++;
        }

    }
    int rem=a-sum ;
    printf("Successful Withdrawals:%d\n", count);
    printf("Remaining Cash:%d\n", rem);
}