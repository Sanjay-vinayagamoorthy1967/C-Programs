#include <stdio.h>

int main(){
    int n,sum=0;//12
    scanf("%d", &n);
    
    for(;n>0;){
        int d=n%10;
        sum=sum+d;//2
        n=n/10;
    }
     printf("%d", sum);
}