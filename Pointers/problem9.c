#include <stdio.h>
#include <string.h>

void find(int n,int arr[],int x){
    int found=0;
    int *p=arr;
   
    for(int i=0;i<n;i++){
        if(*(p+i)==x){
            printf("%d", i+1);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("%d", -1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int x;
    scanf("%d", &x);
    find(n,arr,x);

}