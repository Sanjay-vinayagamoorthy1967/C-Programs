#include <stdio.h>

void digit(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    printf("%d", sum);
}

int main(){
    int n;
    scanf("%d", &n);
    digit(n);
}