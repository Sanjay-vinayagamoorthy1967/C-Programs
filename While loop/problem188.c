#include <stdio.h>

int main(){
    int n,vib;
    scanf("%d", &n);
    int count=0,num=0,temp=0,sum=0,sum1=0;
    int i=1;
    while(i<=n){
        scanf("%d", &vib);
        if(vib>70){
            count++;
            num++;
            if(num>temp){
                temp=num;
                sum=i;
            }
        }else{
            sum1=sum;
        }
        
        i++;

    }if(sum!=0){
        printf("Breakdown At Reading: %d\n", sum1);
    }else{
         printf("Breakdown At Reading: Not Occurred\n");
    }
    printf("Unsafe Readings: %d", count);
}