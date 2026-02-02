#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int duplicate;
    for(int j=0;j<n;j++){
        duplicate=0;
        for(int k=0;k<j;k++){
            if(arr[j]==arr[k]){
                duplicate=1;
            }
        }
        if(duplicate==0){
            printf("%d ",arr[j]);
        }
    

    }
    
    return 0;
}