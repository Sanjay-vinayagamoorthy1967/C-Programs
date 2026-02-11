#include <stdio.h>

void fact(int n){
    int sum=1;
    for(int i=n;i>0;i--){
        sum=sum*i;
    }
    printf("%d", sum);
}

int main(){
    int n;
    scanf("%d", &n);
    fact(n);
}