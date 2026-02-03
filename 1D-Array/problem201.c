#include <stdio.h>

int main(){
    int n,values;
    scanf("%d", &n);
    int mid;
    if(n%2!=0){
        mid=n/2;
    }else{
        mid=(n/2)-1;
    }
    int left=0,right=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    if(n>=3){
        for(int i=0;i<n;i++){
        if(i<mid){
            left=left+arr[i];
        }else if(i>mid){
            right=right+arr[i];
        }else{
            values=i;
        }
        }
        if(left==right){
            printf("%d", mid);
        }
        else{
            printf("%d", -1);
    }
    }else{
        printf("%d", 0);
    
    }
    
}