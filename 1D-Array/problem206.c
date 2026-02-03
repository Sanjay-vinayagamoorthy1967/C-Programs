#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int temp=a[0],num=0,count=0,sum=0;
    for(int j=0;j<n;j++){// 9 8 7 6 
        if(a[j]>temp){
            num=a[j];
            count++;
            if(count==1){
                sum=a[j];
            }

        }else{
            temp=a[j];
        }
    }if(count==0){
        printf("%d", -1);
    }else{
        printf("%d", sum);
    }
}