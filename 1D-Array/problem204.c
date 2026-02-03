#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int temp=0,count=0;
    for(int j=0;j<n;j++){
        if(arr[j]>0  && arr[j]>temp){
            temp=arr[j];
            count++;
        }
    }
    if(count==0){
        printf("No Positive");
    }else{
        printf("%d", count);
    }
}