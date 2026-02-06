#include <stdio.h>

int main(){
    int r,c,n;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    int num=0,sum=0;
    int arr[1000], k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[k]=a[i][j];
            k++;
        }
    }
    int found=0,max=0;
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            if(arr[i]==arr[j]){
                found=arr[i];
                break;
        }
        }
    }printf("%d", found);
}
