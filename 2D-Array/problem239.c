#include <stdio.h>

int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           scanf("%d", &arr[i][j]); 
        }
    }int count=0,found;
    for(int i=0;i<r;i++){
        found=1;
        for(int j=0;j<c;j++){
            int n=arr[i][j];
            for(int k=2;k<n;k++){
                if(n%k==0){
                found=0;
            }
            }
        }if(found==1){
            count++;
        }
    }
        printf("%d", count);
}