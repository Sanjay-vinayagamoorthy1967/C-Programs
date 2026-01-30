#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d", &n);//3
    for(int i=1;i<=n;i++){//3 1
        int square=i*i;//1
        sum=sum+square;
    }
    printf("%d", sum);
}