#include <stdio.h>

void natural(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("%d", sum);
}

int main(){
    int n;
    scanf("%d", &n);
    natural(n);
}