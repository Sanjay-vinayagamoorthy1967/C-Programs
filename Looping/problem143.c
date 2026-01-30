#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int temp1=num;
    int temp2=num;
    int count=0,sum=0;
    

    for(;num>0;){
        num=num/10;
        count=count+1;
    }
    for(;temp1>0;){
        int d=temp1%10;
        int pow=1;
        for(int i=1;i<=count;i++){
            pow=pow*d;
        }
        sum=sum+pow;
        temp1=temp1/10;
    }
    if(sum==temp2){
        printf("Armstrong number.");
    }
    else{
        printf("Not a Armstrong number.");
    }
}