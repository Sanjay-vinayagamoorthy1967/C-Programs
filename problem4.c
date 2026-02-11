#include <stdio.h>

void radius(int r){
    float tot=3.14*r*r;
    printf("%.2f", tot);
}

int main(){
    int r;
    scanf("%d", &r);
    radius(r);
}