#include <stdio.h>

void fib(int n){
    int f=0;
    int l=1;
    for(int i=0;i<n;i++){
        printf("%d ", f);
        int sum=f+l;
        f=l;
        l=sum;
    }    
}
int main(){
    int n;
    scanf("%d", &n);
    fib(n);
}