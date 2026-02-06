#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int total=0,tot=0,avg=0;
    for(int i=0;i<r;i++){  
        int sum=0; 
        for(int j=0;j<c;j++){
            sum+=a[i][j]; 
        }
        avg=sum/c;
        if(sum<total || i==0){
            total=sum;
            tot=i;
        }
        
    }   printf("%d", tot); 
}