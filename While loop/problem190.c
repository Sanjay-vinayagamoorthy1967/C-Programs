#include <stdio.h>

int main(){
    int n,trans;
    scanf("%d", &n);
    int count=0,sum=0,num=0,temp=0;
    int i=1;
    while(i<=n){
        scanf("%d", &trans);
        if(trans>=50000){
            count++;
            sum++;
            if(sum>temp){
                temp=sum;
                if(temp==3){
                    num=i;
                }
            }
        }else{
            sum=0;
        }
        i++;
    }
    if(num>1){
        printf("Fraud Triggered At Attempt: %d\n", num);
    }else{
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    }
    printf("High-Value Transactions: %d", count);
}