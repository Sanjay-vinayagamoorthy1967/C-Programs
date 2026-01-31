#include <stdio.h>

int main(){
    int capacity,hours,values;
    scanf("%d %d", &capacity,&hours);
    int per=(capacity*90)/100;
    int sum=0,count=0;
    while(hours--){
        scanf("%d", &values);
        sum=sum+values;
        if(sum>per){
            count++;
        }
    }printf("Final Occupied Beds:%d\n", sum);
    printf("Critical hour:%d\n", count);
}