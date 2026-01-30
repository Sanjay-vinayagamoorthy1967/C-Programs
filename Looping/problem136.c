#include <stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d", &n1,&n2);
    int small,c;
    if(n1<n2){
        small=n1;
    }else{
        small=n2;
    }
    for(int i=1;i<=small;i++){
        if(n1%i==0 && n2%i==0){
            c=i;
        }
    }printf("%d", c);
}