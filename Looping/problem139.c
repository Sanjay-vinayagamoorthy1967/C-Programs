#include <stdio.h>

int main(){
    int n,count=0,sum=0;
    scanf("%d", &n);
    for(int i=1;n>0;i++){
        int d=n%10;
        count=count+1;
        if(d==1 && count==1){
            sum=sum+1;
        }else if(d==1 && count==2){
            sum=sum+2;
        }else if(d==1 && count==3){
            sum=sum+4;
        }else if(d==1 && count==4){
            sum=sum+8;
        }else if(d==1 && count==5){
            sum=sum+16;
        }else if(d==1 && count==6){
            sum=sum+32;
        }else if(d==1 && count==7){
            sum=sum+64;
        }else if(d==1 && count==8){
            sum=sum+128;
        }
        n=n/10;    
    }
    printf("%d", sum);
}