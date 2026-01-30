#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int rem=a%b;
    int quo=a/b;
    printf("Quotient=%d Remainder=%d", quo, rem);
}