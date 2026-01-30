#include <stdio.h>

int main(){
    int n1,n,b;
    scanf("%d", &n1);
    int n2;
    scanf("%d", &n2);

    if(n1>n2){
        n=("%d", n1);
    }else{
        n=("%d", n2);
    }
    for(int i=n;i>0;i++){
        if(i%n1==0 && i%n2==0){
            printf("%d", i);
            break;
        }
    }




}