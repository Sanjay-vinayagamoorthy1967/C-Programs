#include <stdio.h>

int main(){
    int bal,n,val;
    scanf("%d %d", &bal,&n);
    int sum=0,count=0,count1=0;
    while(n--){
        scanf("%d", &val);
        sum=sum+val;
        if(val<=bal){
            count++;
        }else{
            count1++;
        }

    }
    printf("Safe Hours:%d\n", count);
    printf("Failure Count:%d\n", count1);
}