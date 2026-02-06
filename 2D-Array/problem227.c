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
    int count,max=0,max1=0;
    for(int i=0;i<r;i++){
        int min=a[i][0];
        count=0;
        for(int j=0;j<c;j++){
             if(a[i][j]>min){
                min=a[i][j];  
                count++;
                if(count==1){
                    max++;
                }
             }
        }
    }
        printf("%d", max);

}