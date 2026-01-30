#include <stdio.h>

int main(){
    int n,count=0;//12
    scanf("%d", &n);
    
    for(int i=n%10;n!=0;n=n/10){
        count=count+1;
    }
     printf("%d ", count);
}