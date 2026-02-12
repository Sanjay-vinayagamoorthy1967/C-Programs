#include <stdio.h>

void sum(int n,int arr[]){
    int *p=arr;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=*(p+i);
    }
    printf("%d", sum);
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    sum(n,arr);
}