#include <stdio.h>

int main(){
    int total,n,usage;
    scanf("%d %d", &total,&n);
    int sum=0,count=0,count1=0;
    while(n--){
        scanf("%d", &usage);
        sum=sum+usage;
        if(sum<=total){
            count=count+sum;
        }
        else{
            count1=count1+sum;
        }
    }printf("Treated Patients: %d\n", count);
    printf("Rejected Patients: %d", count1);
}