#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int count=0,num=0,sum=0;
        for(int k=1;k<n-1;k++){
            if(a[k]>a[k-1] && a[k]>a[k+1]){
                sum++;
            }
        }
    printf("%d", sum);
}