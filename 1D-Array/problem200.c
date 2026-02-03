#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int temp=0,num[n];
    for(int j=n-1;j>0;j--){//16 17 4 3 5 
        if(arr[j]>temp){// 5>0 T  3>5  F
            temp=arr[j];//5  //
            num[j]=arr[j];//5
        }else{
            num[j]=temp;//5 5
        }
    }for(int i=1;i<=n-1;i++){
            printf("%d ", num[i]);
        }
        printf("%d ", -1);
}