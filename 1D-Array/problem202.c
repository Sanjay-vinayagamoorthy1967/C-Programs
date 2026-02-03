#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int sum;
    scanf("%d", &sum);
    int found=0,num=0;
    for(int j=0;j<n;j++){//2 4 6 8 10
        for(int k=0;k<n;k++){//2 4 6 8 10
            if(arr[j]+arr[k]==sum){
                printf("%d %d ", arr[j],arr[k]);
                found=1;
            }
        }
        if(found!=0){
            break;
        }
    }if(found==0){
        printf("No pair");
    }
    
}