#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int values=0;
    values=a<b?a:b;
    printf("%d is smallest", values);
    return 0;
}