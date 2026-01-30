#include <stdio.h>

int main(){
    int n;//123
    scanf("%d", &n);
    for(;n!=0;n=n/10){
        printf("%d", n%10);//123  n=123  n/10  n=12
    }
    
}