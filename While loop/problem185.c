
#include <stdio.h>

int main(){
    int n,values;
    scanf("%d", &n);
    int count=0,num=0,sum=0,temp=0,max=0,val=0;
    int i=1;
    while(i<=n){
        scanf("%d", &values);
        if(values<temp  || val==0){
                count++;
                num++;
                val++;
            temp=values;
            if(num>sum){
                sum=num;
                max=i;
            }
        }else{
            num=0;
            if(sum>3){
                temp=0;
            }
            
        }
        i++;
    }
        if(max<3){
             printf("Crash Day: Not Detected\n");
           
        }else{
            printf("Crash Day: %d\n", max);
        }
        
        printf("Total Drops: %d\n", count);

}
