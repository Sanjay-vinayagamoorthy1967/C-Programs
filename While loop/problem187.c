#include <stdio.h>

int main(){
    int n,attempt;
    scanf("%d", &n);
    int count=0,num=0,max=0,temp=0,index=0;
    int i=1;
    while(i<=n){
        scanf("%d", &attempt);
        if(attempt==0){
            count++;
            num++;
            if(num>temp){
                temp=num;
                if(temp==3){
                max=i;
            }
            }
        }else{
            num=0;
        }
        i++;
    }if(max>0){
        printf("Lock Triggered At Attempt: %d\n", max);
    }else{
        printf("Lock Triggered At Attempt: Not Locked\n");
    }
    
    printf("Total Failed Attempts: %d", count);
}