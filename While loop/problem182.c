#include <stdio.h>

int main(){
    int bal,n,val;
    scanf("%d %d", &bal,&n);
    int sum=0,count=0;
    while(n--){
        scanf("%d", &val);
        sum=sum+val;
        if(sum<=bal){
            count++;
        }

    }
    int rem=bal-sum ;
    printf("Successful Purchases::%d\n", count);
    printf("Final Balance:%d\n", rem);
}