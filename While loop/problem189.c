#include <stdio.h>
int main(){
    int fuel,n,waste;
    scanf("%d %d", &fuel,&n);
    int sum=0,count=0,num=0,temp=0,rem=0;
    int i=1;
    while(i<=n){
        scanf("%d", &waste);
        sum=sum+waste;
        if(sum<=fuel){
            count++;
        }else{
            if(rem==0){
            num=sum;
            count++;
            rem++;
            }
        }
        i++;
    }temp=num-fuel;
    if(sum<fuel){
        printf("Emergency Stage: Not Occurred\n");
    }else{
         printf("Emergency Stage: %d\n", count);
    }
    if(temp<=0){
        printf("Fuel Wasted: 0");
    }else{
    printf("Fuel Wasted: %d", temp);
    }
}