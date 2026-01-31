#include <stdio.h>

int main(){
    int week,hours;
    scanf("%d", &week);
    int count=0,count1=0;
    while(week--){
        scanf("%d", &hours);
        if(hours==0){
            count++;
        }else{
            count1++;
        }
        
    }printf("Inactive week:%d\n", count);
    if(count>=count1){
        printf("High\n");
    }else{
        printf("Risk: Low");
    }
}