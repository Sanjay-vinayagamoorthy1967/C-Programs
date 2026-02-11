#include <stdio.h>

void interest(int p,int r,int t){
    float tot=(p*r*t)/100;
    printf("%.2f", tot);
}

int main(){
    int p,r,t;
    scanf("%d %d %d", &p,&r,&t);
    interest(p,r,t);
}