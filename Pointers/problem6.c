#include <stdio.h>

void reverse(int n,int arr[]){
    int *p=arr;
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
    printf("%d", *(p+i));
    }

}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    reverse(n,arr);
}