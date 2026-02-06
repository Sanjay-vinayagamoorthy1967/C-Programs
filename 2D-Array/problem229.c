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
    int num=0,num1=0,num2=0,total=0,index=0;
    for(int j=0;j<c;j++){
        int sum=0;
        for(int i=0;i<r;i++){
           sum=sum+a[i][j];
        }
        if(sum>num){
            num=sum;
            index=j;
        }
    }  
    printf("%d", index);
}