#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){// 1 2 2 3 3 4
        int duplicate=0;
        for(int j=0;j<i;j++){//1 2 2 3 3 4
            if(arr[i]==arr[j]){
                duplicate=1;
            }
        }
        if(duplicate==0){//
            count++;
        }
    }
    printf("%d",count);
}