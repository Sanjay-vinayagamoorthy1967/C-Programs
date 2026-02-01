
#include <stdio.h>

int main(){
    int data,n,usage;
    scanf("%d %d", &data,&n);
    int num=0,sum=0,temp=0,count=0,rem=0;
    int i=1;
    while(i<=n){
        scanf("%d", &usage);
        sum=sum+usage;
        if(sum<=data){
            count++;
        }else{
            if(temp==0){
                count++;
                num=sum;
                temp++;
            }
        }
        rem=num-data;
        i++;
    }if(sum>data){
        printf("Exhausted Day: %d\n", count);
    }else{
        printf("Exhausted Day: Not Exhausted\n");
    }
    if(rem>0){
    printf("Overused Data: %d\n", rem);
    }else{
        printf("Overused Data: 0\n");
    }
}
