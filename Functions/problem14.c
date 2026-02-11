#include <stdio.h>

void perfect(int n){
    int temp=n;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(temp==sum){
        printf("Perfect");
    }else{
        printf("Not Perfect");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    perfect(n);
}