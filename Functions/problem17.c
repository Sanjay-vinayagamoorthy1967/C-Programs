#include <stdio.h>

void armstrong(int n){
    int temp1=n;
    int temp=n;
    int count=0;
    while(n!=0){
        int digit=n%10;
        count+=1;
        n=n/10;
    }
    int sum=0;
    while(temp!=0){
        int digit1=temp%10;
        int num=1;
        for(int i=0;i<count;i++){
            num=num*digit1;
        }
        sum=sum+num;
        temp=temp/10;
    }
    if(temp1==sum){
        printf("Armstrong");
    }else{
        printf("Not Armstrong");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    armstrong(n);
}