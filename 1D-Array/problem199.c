#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int temp=0,num=0,a[n],k=0;
    for(int j=n-1;j>=0;j--){
        if(arr[j]>temp){
            temp=arr[j];
            a[k]=temp;
            k=k+1;
    }    
    }    
    for(int i=k-1;i>=0;i--){
        printf("%d ", a[i]);
    
     
    }       
}
