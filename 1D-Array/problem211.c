#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int count=0,num=0;
    for(int j=0;j<n;j++){//1 2 3 4  
        for(int k=0;k<j;k++){//2 3 4
            if(a[j]==a[k]){
                count=1;
                if(count==1){
                    num=a[j];
                }
            } 
        }
    }if(count==0){
        printf("%d", -1);
    }else{
        printf("%d", num);
    }
}