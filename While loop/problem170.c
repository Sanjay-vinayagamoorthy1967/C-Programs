#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d", &a,&b);
    int count=0;
    int count1=0;
    while(a--){
        scanf("%d", &b);
        if(b==1){
          count=count+1;
          c=count;
        }else{
            count1=count1+1;
            d=count;
        }
    }
    printf("Successful:%d\n", count);
    printf("Cancelled:%d\n", count1);
    if(c>=d){
        printf("Status: Safe");
    }else{
        printf("Status: Risk");
    }
}