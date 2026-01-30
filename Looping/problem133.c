#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d", &n);
    for(int i=2;i<=n;i++){
        int num=0;
    for(int j=2;j<i;j++){
        if(i%j==0){
            num=num+1;
        }
    }
    if(num==0){
        count++;
    }
    num=0;
    }
    printf("%d", count);
}