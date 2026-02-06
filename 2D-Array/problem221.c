#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d", &arr[i][j]); 
        }
    }
    int total=0, sum=0,num1=0,num2=0,num3=0,tot=0,t=0;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
          if(i==0){
            num1=sum;
          }if(i==1){
            num2=sum;
          }if(i==2){
            num3=sum;
          }
          total=num2-num1;
          tot=num1-num3;
          t=num2-num3;
            
        }printf("%d\n", total);
        
    }