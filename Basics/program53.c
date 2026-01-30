#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int temp=a;
    a=a/=b;
    temp%=b;
    printf("%d %d", a,temp);
    return 0;
} 