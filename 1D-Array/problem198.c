#include <stdio.h>

int main(){
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for(int j=k;j<n;j++){
        printf("%d ", arr[j]);
    }
    for(int n=0;n<k;n++){
        printf("%d ", arr[n]);
    }
}