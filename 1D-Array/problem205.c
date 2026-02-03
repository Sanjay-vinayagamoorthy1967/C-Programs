#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int a[n],k=0;
    for(int j=0;j<n;j++){
        if(arr[j]>0){
            a[k]=arr[j];
            k=k+1;
        }
    }while(k<n){
        a[k]=0;
        k++;
    }
    for(int k=0;k<n;k++){
        printf("%d ", a[k]);
    }

}