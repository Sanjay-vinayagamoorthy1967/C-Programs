#include <stdio.h>

int main(){
    int n,sum=0,d;
    scanf("%d", &n);
    int temp=n;
    int fact=1;   
    for(;n>0;){ 
        d=n%10;                         
    for(int i=1;i<=d;i++){
        fact=fact*i;
    }
        sum=sum+fact;
        n=n/10;
        fact=1;
    }

    if(sum==temp){
        printf("Yes");
    }else{
        printf("No");
    }
}