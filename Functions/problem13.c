#include <stdio.h>

void power(int n1,int n2){
    int sum=1;
        for(int i=0;i<n2;i++){
        sum=sum*n1;
    }
    printf("%d", sum);
}

int main(){
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    power(n1,n2);
}