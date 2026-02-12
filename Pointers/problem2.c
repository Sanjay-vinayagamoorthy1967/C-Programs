#include <stdio.h>

void max(int n,int arr[]){
    int *p=arr;
    int max=-100000000;
    for(int i=0;i<n;i++){
        if(*(p+i)>max && *(p+i)<1000){
            max=*(p+i);
        }
    }
    printf("%d\n", max);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    max(n,arr);
    return 0;
}