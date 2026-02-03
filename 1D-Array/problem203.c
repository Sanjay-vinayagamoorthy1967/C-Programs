#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }
    int avg=sum/n;
    int count=0;
    for(int j=0;j<n;j++){
        if(arr[j]>avg){
            count++;
        }
    }printf("%d", count);
}