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
    int count,max=0;
    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c-1;j++){
            if(a[i][j]>=a[i][j+1]){
                count=1;
                break;
            }
        }if(count==0){
            max++;
        }
        
    }printf("%d", max);

}