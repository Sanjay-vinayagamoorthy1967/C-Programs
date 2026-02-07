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
    int arr[r*c],k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           arr[k]=a[i][j];
           k++;
        }
    }
    int num=0,count=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }if(count==1){
            num=arr[i];
            break;
        }
    }
    printf("%d", num);
}
