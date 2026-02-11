#include <stdio.h>

void prime(int n){
    int found=0;
    for(int j=2;j<n;j++){
        if(n%j==0){
            found=1;
        }
    }
    if(found==0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    prime(n);
}