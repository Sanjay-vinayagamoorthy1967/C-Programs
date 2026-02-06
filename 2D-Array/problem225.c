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
    int temp=0,index=0;
    for(int i=0;i<r;i++){
        int pro=1;
        for(int j=0;j<c;j++){
            pro=pro*arr[i][j];
        }if(pro>temp){
            temp=pro;
            index=i;
        }
    }printf("%d", index);

}