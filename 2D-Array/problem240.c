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
    int count,max=0;;
    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]>1000){
                count++;
            }
            if(count==c){
            max++;
        }
        }
    }printf("%d", max);
}