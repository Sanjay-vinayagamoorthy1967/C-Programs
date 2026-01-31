#include <stdio.h>

int main(){
    int n,val;
    scanf("%d", &n);
    int sum=0,count=0;
    while(n--){
        scanf("%d", &val);
        sum=sum+val;
        if(val>4){
            count++;
        }
        
    }
    
    printf("Total Overtime:%d\n", sum);
    printf("Burnout Days:%d\n", count);
}