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
    int sum,num=0,sum1=0;
    for(int i=0;i<r;i=i+2){
        sum=0;
        for(int j=0;j<c;j++){
            sum=sum+a[i][j];
        }
        num=num+sum;
    }
    sum1=a[1][0]+a[1][2];
    printf("%d", sum1+num);
}
