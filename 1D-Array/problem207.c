#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int f=a[0];
    int l=a[n-1];
    int count=0;
    for(int i=0;i<n;i++){
        if(f==l){
            printf("Yes");
            count++;
            break;
        }
    }if(count==0){
       printf("No");
    }
}