#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int p;
    scanf("%d", &p);
    int power=1;
    for(int i=1;i<=p;i++){
        power=power*n;
    }
    printf("%d", power);
}