#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c=a&&b;
    int d=a||b;
    int e=c||d;
    printf("%d ", e);
}