#include <stdio.h>

void gcd(int n1,int n2){
    int num=0;
    if(n1<n2){
        num=n1;
    }else{
        num=n2;
    }
    int num1=0;
    for(int i=1;i<=num;i++){
        if(n1%i==0 &&n2%i==0){
            num1=i;
        }
    }
    printf("%d", num1);

}

int main(){
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    gcd(n1,n2);
}