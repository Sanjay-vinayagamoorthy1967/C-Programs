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
    int count=0;
    for(int i=0;i<r;i++){
        int min=a[i][0];
        for(int j=0;j<c;j++){
            if(a[i][j]<min){
                min=a[i][j];//1
            }
                int max=a[0][j];
            for(int l=0;l<r;l++){
                if(a[l][j]>max){
                    max=a[l][j];
                }
        }if(min==max){
                count++;
            } 
        } 
    }         
    
    printf("%d", count);
     
}